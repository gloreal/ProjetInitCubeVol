/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: snir2g1
 *
 * Created on 14 mars 2019, 16:12
 */

#include <cstdlib>
#include <iostream>
#include "../defs/Batterie.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Batterie* batterie = new Batterie();
    batterie->obtenirStatus();
    cout << "Le niveau de charge de la batterie est : " << (int) batterie->getChargingLevel() << endl;
    cout << "La tension de la batterie est : " << batterie->getVoltage() << endl;
    cout << "Le courant de la batterie est : " << batterie->getAmperage() << endl;
    if(batterie->getInCharge()){
        cout << "La batterie est en charge " << endl;
    }else{
        cout << "La batterie n'est pas en charge " << endl;
    }
    cout << "La temperature de la batterie est : " << batterie->getTemperature() << endl;
    cout << "La capacité de la batterie est : " << batterie->getCapacity() << endl;
    delete batterie;
    return 0;
}

