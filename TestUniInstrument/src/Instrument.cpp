/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InstrumentPhantom.cpp
 * Author: snir2g2
 * 
 * Created on 27 mars 2019, 13:19
 */

#include "Instrument.h"
#include <iostream>
#include <string>

using namespace std;

Instrument::Instrument() {
    status = new Status();
}

Instrument::Instrument(const Instrument& orig) {
}

Instrument::~Instrument() {
}

list<Mesure*> Instrument::getMesures() {
    return listedemesures;
}

void Instrument::addMesure(Mesure* uneMesure){
    listedemesures.push_back(uneMesure);
}


void Instrument::activer() {
}

void Instrument::desactiver() {
}

list <string> Instrument::obtenirStatus() {
}

Status Instrument::getStatus() {
    return *status;
}

void Instrument::obtenirMode() {
}

void Instrument::obtenirTempInst() {
}
