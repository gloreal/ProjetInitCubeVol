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
    cout << (int)batterie->getChargingLevel() << endl;
    cout << batterie->getVoltage() << endl;
    cout << batterie->getAmperage() << endl;
    cout << batterie->getInCharge() << endl;
    cout << batterie->getTemperature() << endl;
    cout << batterie->getCapacity() << endl;    
    delete batterie;
    return 0;
}

