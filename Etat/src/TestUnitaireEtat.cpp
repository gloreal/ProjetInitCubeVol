/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: snir2g1
 *
 * Created on 1 avril 2019, 09:48
 */

#include <cstdlib>
#include <iostream>
#include "../defs/Etat.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Etat* etat =  new Etat();
    list<string> instrument;
    instrument.push_back("Batterie");
    short periode = 15;
    etat->setAppareil(instrument);
    etat->setPeriodicity(periode);
    cout << "La periodicité est de : " << etat->getPeriodicity() << endl;
    list<string> appareil = etat->getAppareil();
    list<string>::iterator it;
    for (it = appareil.begin(); it != appareil.end(); it++) {
        cout << "L'apareil est : " << (*it) << endl;
    }
    delete etat;
    return 0;
}

