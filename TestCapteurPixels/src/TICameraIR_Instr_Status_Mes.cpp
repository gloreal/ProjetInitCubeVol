/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TICameraIR_Instr_Status_Mes.cpp
 * g++ TICameraIR_Instr_Status_Mes.cpp src/CameraIR.cpp src/I2C.cpp src/Instrument.cpp src/Mesure.cpp src/Status.cpp -o TICameraIR -std=c++14
 * Author: snir2g2
 *
 * Created on 27 mars 2019, 15:51
 */

#include <cstdlib>
#include <list>
#include "CameraIR.h"
#include "Status.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char x;
    char y;
    char z;
    float* valpix;
    list<Mesure*> laListe;
    list<Mesure*>::iterator lIndice;
    Mesure* lamesure;
    CameraIR* uneCamera = new CameraIR();
    
    /** Test du STATUS*********************/
    cout << "Test du status" << endl;
    uneCamera->obtenirStatus();
    if (uneCamera->getStatus()->getMode() == NORMAL)
        cout << " Fonctionnement = NORMAL" << endl;
    else if (uneCamera->getStatus()->getMode() == SLEEP)
        cout << " Fonctionnement = SLEEP" << endl;
    else if (uneCamera->getStatus()->getMode() == STAND_BY)
        cout << " Fonctionnement = STAND_BY" << endl;
    
    //** Activation de l'instrument****************/
    if (uneCamera->getStatus()->getMode() == SLEEP)
    {
    cout << "Voulez-vous activer l'instrument? (O/N) : ";
    cin>>x;
    if (x == 'O' || x == 'o') {
        uneCamera->activer();
    } else {
        
        cout << "L'instrument reste désactivé" << endl;
    }
    }
    
    /** Test du STATUS*********************/
    cout << "Test du status" << endl;
    uneCamera->obtenirStatus();
    if (uneCamera->getStatus()->getMode() == NORMAL)
        cout << " Fonctionnement = NORMAL" << endl;
    else if (uneCamera->getStatus()->getMode() == SLEEP)
        cout << " Fonctionnement = SLEEP" << endl;
    else if (uneCamera->getStatus()->getMode() == STAND_BY)
        cout << " Fonctionnement = STAND_BY" << endl;

    /** Capture des pixels *********************/
    cout << "Capture des pixels " << endl;
    uneCamera->obtenirPixels();
    valpix = uneCamera->getPixels();
    for (int i = 0; i < 64; i++) {
        cout << "Pixel " << i + 1 << ": ";
        cout << valpix[i] << endl;
    }
    cout << "Choisissez le rayon de capture de la Caméra : ";
    cin>>y;
    switch (y) {

        case 1:
        {
            /** Lecture de la température moyenne pour R = 1 pixel*********************/
            if (uneCamera->lireTemperature(1) > 0) {
                /** Ajout de l'heure de prélèvement à la mesure *********************/
                uneCamera->setDateMesure("2019/03/28 15:22:47");

                laListe = uneCamera->getMesures();
                lamesure = laListe.back();
                cout << "Temp moyenne 1 : " << lamesure->getMesure() << endl;
                cout << " Date et heure de prélèvement : " << lamesure->getDateHour() << endl;
            } else cout << "Problème instrument 1 " << endl;
            break;
        }

        case 2:
        {
            /** Lecture de la température moyenne pour R = 2 pixels*********************/
            if (uneCamera->lireTemperature(2) > 0) {
                /** Ajout de l'heure de prélèvement à la mesure *********************/
                uneCamera->setDateMesure("2019/03/28 15:22:47");

                laListe = uneCamera->getMesures();
                lamesure = laListe.back();
                cout << "Temp moyenne 2 : " << lamesure->getMesure() << endl;
                cout << " Date et heure de prélèvement : " << lamesure->getDateHour() << endl;
            } else cout << "Problème instrument 2 " << endl;
            break;
        }

        case 3:
        {
            /** Lecture de la température moyenne pour R = 2 pixels*********************/
            if (uneCamera->lireTemperature(3) > 0) {
                /** Ajout de l'heure de prélèvement à la mesure *********************/
                uneCamera->setDateMesure("2019/03/28 15:22:47");

                laListe = uneCamera->getMesures();
                lamesure = laListe.back();
                cout << "Temp moyenne 3 : " << lamesure->getMesure() << endl;
                cout << " Date et heure de prélèvement : " << lamesure->getDateHour() << endl;
            } else cout << "Problème instrument 3 " << endl;
            break;
        }

        default:
        {
            if (uneCamera->lireTemperature(4) > 0) {
                /** Ajout de l'heure de prélèvement à la mesure *********************/
                uneCamera->setDateMesure("2019/03/28 15:22:47");

                CameraIR* uneCamera = new CameraIR();
                uneCamera->obtenirPixels();
            } else cout << "Problème instrument 4 " << endl;
            break;
        }

//            /** Validation du STATUS*********************/
//            cout << "Voulez-vous désactiver l'instrument? (O/N) : ";
//            cin>>z;
//            if (z == 'O' || z == 'o') {
//                uneCamera->desactiver(); /////////// On désactive l'instrument
//            } else {
//                cout << "L'instrument reste activé" << endl;
//            }
//
//
//            cout << "Mode de fonctionnement du capteur : " << endl;
//
//
//            uneCamera->obtenirStatus();
//            if (uneCamera->getStatus()->getMode() == NORMAL)
//                cout << " Fonctionnement = NORMAL" << endl;
//            else if (uneCamera->getStatus()->getMode() == SLEEP)
//                cout << " Fonctionnement = SLEEP" << endl;
//            else if (uneCamera->getStatus()->getMode() == STAND_BY)
//                cout << " Fonctionnement = STAND_BY" << endl;
//            cout << " La température de l'instrument est : " << uneCamera->getStatus()->getTemp() << endl;
//
//
//            uneCamera->activer();
//            uneCamera->obtenirStatus();
//            if (uneCamera->getStatus()->getMode() == NORMAL)
//                cout << " Fonctionnement = NORMAL" << endl;
//            else if (uneCamera->getStatus()->getMode() == SLEEP)
//                cout << " Fonctionnement = SLEEP" << endl;
//            else if (uneCamera->getStatus()->getMode() == STAND_BY)
//                cout << " Fonctionnement = STAND_BY" << endl;
//            cout << " La température de l'instrument est : " << uneCamera->getStatus()->getTemp() << endl;

            uneCamera->~CameraIR();


    }
}