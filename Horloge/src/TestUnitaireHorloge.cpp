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
#include "../defs/Horloge.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Horloge* horloge = new Horloge();
    horloge->lire();
    string dateHeur = horloge->getDateHeure();
    cout << "La date et l'heure est : " << dateHeur << endl;
    horloge->setRdvTime("2019/05/24 10:30:00");
    string rdv = horloge->getRdvTime();
    cout << "L'heure du rdv est : " << rdv << endl;
    delete horloge;
    return 0;
}

