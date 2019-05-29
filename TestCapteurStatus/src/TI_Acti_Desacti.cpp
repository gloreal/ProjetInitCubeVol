
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
    if (uneCamera->getStatus()->getMode() == SLEEP) {
        cout << "Voulez-vous activer l'instrument? (O/N) : ";
        cin>>x;
        if (x == 'O' || x == 'o') {
            uneCamera->activer();
        } else {

            cout << "L'instrument reste désactivé" << endl;
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
    }

   

    /** Validation du STATUS*********************/
    if (uneCamera->getStatus()->getMode() == NORMAL) {
        cout << "Voulez-vous désactiver l'instrument? (O/N) : ";
        cin>>z;
        if (z == 'O' || z == 'o') {
            uneCamera->desactiver(); /////////// On désactive l'instrument
        } else {
            cout << "L'instrument reste activé" << endl;
        }
    }

    cout << "Mode de fonctionnement du capteur : " << endl;


    uneCamera->obtenirStatus();
    if (uneCamera->getStatus()->getMode() == NORMAL)
        cout << " Fonctionnement = NORMAL" << endl;
    else if (uneCamera->getStatus()->getMode() == SLEEP)
        cout << " Fonctionnement = SLEEP" << endl;
    else if (uneCamera->getStatus()->getMode() == STAND_BY)
        cout << " Fonctionnement = STAND_BY" << endl;
    cout << " La température de l'instrument est : " << uneCamera->getStatus()->getTemp() << endl;


    if(uneCamera->getStatus()->getMode() == SLEEP)
    {
    uneCamera->activer();
    
    cout<<"Mode de fonctionnement du capteur après la réactivation :"<<endl;
    uneCamera->obtenirStatus();
    if (uneCamera->getStatus()->getMode() == NORMAL)
        cout << " Fonctionnement = NORMAL" << endl;
    else if (uneCamera->getStatus()->getMode() == SLEEP)
        cout << " Fonctionnement = SLEEP" << endl;
    else if (uneCamera->getStatus()->getMode() == STAND_BY)
        cout << " Fonctionnement = STAND_BY" << endl;
    cout << " La température de l'instrument est : " << uneCamera->getStatus()->getTemp() << endl;

    uneCamera->desactiver();
    }
    uneCamera->~CameraIR();


}
