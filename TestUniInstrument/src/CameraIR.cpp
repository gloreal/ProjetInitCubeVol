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
   /* ouvrirAcces();
    setAddr(0x69);
    connexion();*/
    cout<<"Création de la camera"<<endl;
}

CameraIR::CameraIR(const CameraIR& orig) {

}

CameraIR::~CameraIR() {
    //fermerAcces();
    cout<<"Destruction de la camera"<<endl;
}

void CameraIR::obtenirPixels() {
    
//    char* recup;
//    char adresse = 0x80;
//    int addr[70];
//    
//    //preparation des registres
//    setRegistre(0x00);
//    ecriture();
//    setRegistre(0x00);
//    ecriture();
//    
//    setRegistre(0x01);
//    ecriture();
//    setRegistre(0x3F);
//    ecriture();
//    
//    setRegistre(0x03);
//    ecriture();
//    setRegistre(0x00);
//    ecriture();
//    
//    setRegistre(0x02);
//    ecriture();
//    setRegistre(0x00);
//    ecriture();
//    
//    sleep(1);
//    
//    
//    //recuperation des pixels
//    for (int i = 0; i < 64; i++) {
//        setRegistre(adresse);
//        ecriture();
//        recup = lecture();
//        float t = ((recup[1] << 8) | recup[0])*0.25;
//        pixels[i] = t;
//        adresse += 2;
//    }
    cout<<"Récupération des pixels"<<endl;
}

void CameraIR::setDateMesure(string dateHour) {
    //this->mesure->setDateHour(dateHour);
    cout<<"Attributionde la date et de l'heure"<<endl;
}

void CameraIR::lireTemperature(int centre[], int rayon) {
    
//    float moy;
//
//    switch (rayon) {
//        case 1:                                     //Pour les 4 pixels centraux
//        {
//            moy = (valpix[27] + valpix[28] + valpix[35] + valpix[36])/4;
//            cout<<moy<<endl;  
//            break;
//        }
//        
//        case 2:                                     //Pour les 16 pixels centraux
//        {
//            moy = (valpix[18] + valpix[19] + valpix[20] + valpix[21] + valpix[26] + valpix[27] + valpix[28] + valpix[29] + valpix[34] + valpix[35] + valpix[36] + valpix[37] + valpix[42] + valpix[43] + valpix[44] + valpix[45])/16;
//            cout<<moy<<endl;
//        }
//        
//        case 3:                                     //Pour les 36 pixels centraux
//        {
//            moy = (valpix[9] + valpix[10] + valpix[11] + valpix[12] + valpix[13] + valpix[14] + valpix[17] + valpix[18] + valpix[19] + valpix[20] + valpix[21] + valpix[22] + valpix[25] + valpix[26] + valpix[27] + valpix[28] + valpix[29] + valpix[30] + valpix[33] + valpix[34] + valpix[35] + valpix[36] + valpix[37] + valpix[38] + valpix[41] + valpix[42] + valpix[43] + valpix[44] + valpix[45] + valpix[46] + valpix[49] + valpix[50] + valpix[51] + valpix[52] + valpix[53] + valpix[54])/36;
//            cout<<moy<<endl;   
//        }
//        
//         default:                                   //Pour tous les pixels
//        { 
//            float moyenne;
//            for (int i = 0; i < 64; i++) {
//                moyenne = moyenne + valpix[i];
//            }
//            moy = moyenne / 64;
//            cout<<moy<<endl;
//            break;
//        }       
//    }
    Mesure* uneMesure = new Mesure(moyenne);
    addMesure(uneMesure);
}

float* CameraIR::getPixels() {
    //return pixels;
    cout<<"Récupère les tableaux de pixels"<<endl;
}

void CameraIR::activer(){
    cout<<"Activation de l'instrument"<<endl;
    /*setRegistre(0x00);
    ecriture();*/   
}

void CameraIR::desactiver(){
    cout<<"Désactivation de l'instrument"<<endl;
    /*setRegistre(0x10);
    ecriture();*/   
}

list <string> CameraIR::obtenirStatus() {
    cout<<"Récolte des informations de la classe Status"<<endl;
    //obtenirMode();
    //obtenirTempInst();
}

void CameraIR::obtenirMode() {
    cout<<"Obtention du mode actuel de l'instrument"<<endl;
    //mode = this->status->getMode();
    
}

void CameraIR::obtenirTempInst() {
    cout<<"Obtention de la température à l'instant demandé"<<endl;
    //TempInst = this->status->getTemp();
    
}