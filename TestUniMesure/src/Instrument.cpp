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

#include "../defs/Instrument.h"
#include <iostream>
#include <string>

using namespace std;

Instrument::Instrument() {
    cout<<"On crée un instument"<<endl;
    //status = new Status();
}

Instrument::Instrument(const Instrument& orig) {
}

Instrument::~Instrument() {
    cout<<"L'instrument est détruit"<<endl;
}

list<Mesure*> Instrument::getMesures() {
    cout<<"Récupère la liste des mesures effectuées"<<endl;
    //list<Mesure> getMesures;
}

void Instrument::activer() {
}

void Instrument::desactiver() {
}

list <string> Instrument::obtenirStatus() {
}

void Instrument::addMesure(Mesure* uneMesure){
    cout<<"Ajout d'une mesure à la liste"<<endl;
    //listedemesures.push_back(uneMesure);
}

void Instrument::obtenirMode() {
}

void Instrument::obtenirTempInst() {
}

void Instrument::clearMesures() {
    cout<<"La liste est détruite"<<endl;
    //this->listedemesures.clear();
}
