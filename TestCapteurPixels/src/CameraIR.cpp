/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CameraIR.cpp
 * Author: snir2g2
 * 
 * Created on 14 mars 2019, 17:40
 */

#include "CameraIR.h"


CameraIR::CameraIR() {
	this->address=0x69;
}

CameraIR::CameraIR(const CameraIR& orig) {

}

CameraIR::~CameraIR() {
}

int CameraIR::obtenirPixels() {
    
    char* recup;
    char adresse = 0x80;
    int addr[70];
    
       
    //recuperation des pixels
    for (int i = 0; i < 64; i++) {
        setAddrRegistre(adresse);
        ecrire();
        recup = lire();
		if (i==0) 
			if ((recup[0]==0) && (recup[1]==128)) return -1;
        float t = calculerTemperature(recup[0]);
        pixels[i] = t;
        adresse += 2;
    }  
	return 64;
}
   
   
    
void CameraIR::setDateMesure(string dateHour) {

	this->listedemesures.back()->setDateHour(dateHour);
}

float CameraIR::calculerTemperature(char aoctetUtile) {
	float resultat;

	//Conversion en réel
	resultat=aoctetUtile;
	resultat = resultat*0.25;
	return resultat;
}

int CameraIR::lireTemperature(int rayon) {
	int addr[70];
	float moy=0;
    char* recup;

		switch (rayon) {
			case 1:                                     //Pour les 4 pixels centraux
			{
				addr[0]=0xB6; //pixel 28
				addr[1]=0xB8; //pixel 29
				addr[2]=0xC6; //pixel 36
				addr[3]=0xC8; //pixel 37
				for (int i=0;i<4;i++)
				{
					setAddrRegistre(addr[i]);
					ecrire();
					recup = lire();
					if (i==0)
						if ((recup[0]==0) && (recup[1]==128)) return -1; //Au cas où l'instrument serait dans l'état SLEEP
					moy = moy + calculerTemperature(recup[0]);
				}
				this->moyenne = moy/4;
				break;
			}
        
			case 2:                                     //Pour les 16 pixels centraux
			{
				addr[0]=0xA4; //pixel 19
				addr[1]=0xA6; //pixel 20
				addr[2]=0xA8; //pixel 21
				addr[3]=0xAA; //pixel 22
				addr[4]=0xB4; //pixel 27
				addr[5]=0xB6; //pixel 28
				addr[6]=0xB8; //pixel 29
				addr[7]=0xBA; //pixel 30
				addr[8]=0xC4; //pixel 35
				addr[9]=0xC6; //pixel 36
				addr[10]=0xC8; //pixel 37
				addr[11]=0xCA; //pixel 38
				addr[12]=0xD4; //pixel 43
				addr[13]=0xD6; //pixel 44
				addr[14]=0xD8; //pixel 45
				addr[15]=0xDA; //pixel 46
				for (int i=0;i<16;i++)
				{
					setAddrRegistre(addr[i]);
					ecrire();
					recup = lire();
					if (i==0)
						if ((recup[0]==0) && (recup[1]==128)) return -1; //Au cas où l'instrument serait dans l'état SLEEP
					moy = moy + calculerTemperature(recup[0]);
				}
				this->moyenne = moy/16;
				break;
			}
        
			case 3:                                     //Pour les 36 pixels centraux
			{

				addr[0]=0x92; //pixel 10
				addr[1]=0x94; //pixel 11
				addr[2]=0x96; //pixel 12
				addr[3]=0x98; //pixel 13
				addr[4]=0x9A; //pixel 14
				addr[5]=0x9C; //pixel 15

				addr[6]=0xA2; //pixel 18
				addr[7]=0xA4; //pixel 19
				addr[8]=0xA6; //pixel 20
				addr[9]=0xA8; //pixel 21
				addr[10]=0xAA; //pixel 22
				addr[11]=0xAC; //pixel 23

				addr[12]=0xB2; //pixel 26
				addr[13]=0xB4; //pixel 27
				addr[14]=0xB6; //pixel 28
				addr[15]=0xB8; //pixel 29
				addr[16]=0xBA; //pixel 30
				addr[17]=0xBC; //pixel 31

				addr[18]=0xC2; //pixel 34
				addr[19]=0xC4; //pixel 35
				addr[20]=0xC6; //pixel 36
				addr[21]=0xC8; //pixel 37
				addr[22]=0xCA; //pixel 38
				addr[23]=0xCC; //pixel 39

				addr[24]=0xD2; //pixel 42
				addr[25]=0xD4; //pixel 43
				addr[26]=0xD6; //pixel 44
				addr[27]=0xD8; //pixel 45
				addr[28]=0xDA; //pixel 46
				addr[29]=0xDC; //pixel 47

				addr[30]=0xE2; //pixel 50
				addr[31]=0xE4; //pixel 51
				addr[32]=0xE6; //pixel 52
				addr[33]=0xE8; //pixel 53
				addr[34]=0xEA; //pixel 54
				addr[35]=0xEC; //pixel 55
				for (int i=0;i<16;i++)
				{
					setAddrRegistre(addr[i]);
					ecrire();
					recup = lire();
					if (i==0)
						if ((recup[0]==0) && (recup[1]==128)) return -1; //Au cas où l'instrument serait dans l'état SLEEP
					moy = moy + calculerTemperature(recup[0]);
				}
				this->moyenne = moy/36;
				break;
			}
        
			 default:                                   //Pour tous les pixels
			{ 
				float moyenne;
				obtenirPixels();
				for (int i = 0; i < 64; i++) {
					moyenne = moyenne + pixels[i];
				}
				moy = moyenne / 64;
				this->moyenne = moy;
				break;
			}
		}


		Mesure* uneMesure = new Mesure(moyenne);
		addMesure(uneMesure);
		return 1;
	//}
	//else return -1;
}

float* CameraIR::getPixels() {
	return pixels;
}

void CameraIR::activer(){
	//passage en mode normale
	setAddrRegistre(POWERCTLREG);
	if (ecrire(NORMALFONCT)>0)
	{
		Mode leMode=NORMAL;
		this->status->setMode(leMode);
	}
	//Remise à zero de toutes les données
    setAddrRegistre(RESETREG);
    ecrire(INITIALRST);
	usleep(500000);
}

void CameraIR::desactiver(){
	//passage en mode normale
	setAddrRegistre(POWERCTLREG);
	if (ecrire(SLEEPFONCT)>0)
	{
		Mode leMode=SLEEP;
		this->status->setMode(leMode);
	}
	usleep(500000);
}

void CameraIR::obtenirMode() {
    char* recup;
    //Récolte de l'état de fonctionnement
    setAddrRegistre(POWERCTLREG);
    ecrire();
    recup =lire();
	/*Attention! La situation recup[0]==SLEEPFONCT ne se produit jamais car le registre 
		POWERCTLREG est inaccessible si la camera est dans le mode SLEEP.*/
	if (recup[0]==NORMALFONCT)
	{
		setAddrRegistre(FIRSTPIXREG );
		ecrire();
		recup =lire();
		if ((recup[0]==0) && (recup[1]==128))
		{
			Mode leMode=SLEEP;
			this->status->setMode(leMode);
		}
		else
		{
			Mode leMode=NORMAL;
			this->status->setMode(leMode);
		}
	}	
	else 
	{
		Mode leMode=STAND_BY;
		this->status->setMode(leMode);
	}

}

void CameraIR::obtenirTempInst() {

    //Récolte de la température interne de l'instrument
	float tempInstrument;
	setAddrRegistre(THERMREG);
    ecrire();
    char* buf = lire();
    tempInstrument = calculerTemperature(buf[0]);
    status->setTemp(tempInstrument);
    
}

float CameraIR::getMoyenne(){
    return moyenne;
}