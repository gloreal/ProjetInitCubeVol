/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Batterie.cpp
 * Author: snir2g1
 * 
 * Created on 14 mars 2019, 16:13
 */

#include "../defs/Batterie.h"

Batterie::Batterie() {
    capacity = 1820;
}

Batterie::~Batterie() {
}

void Batterie::obtenirNiveau() {
    cout << "Récuperation niveau de charge" << endl;
    chargingLevel = 85;
}

void Batterie::obtenirCourant() {
    cout << "Récuperation courant" << endl;
    amperage = 946;
}

void Batterie::obtenirTemperature() {
    cout << "Récuperation temperature" << endl;
    temperature = 27;
}

void Batterie::obtenirCharge() {
    cout << "Récuperation charge" << endl;
    inCharge = 0;
}

void Batterie::obtenirTension() {
    cout << "Récuperation tension" << endl;
    voltage = 1.3;
}

void Batterie::obtenirStatus() {
    cout << "Récuperation des valeurs" << endl;

    obtenirNiveau();
    obtenirCourant();
    obtenirTemperature();
    obtenirCharge();
    obtenirTension();
}

unsigned char Batterie::getChargingLevel() {
    return chargingLevel;
}

float Batterie::getVoltage() {
    return voltage;
}

short Batterie::getAmperage() {
    return amperage;
}

bool Batterie::getInCharge() {
    return inCharge;
}

float Batterie::getTemperature() {
    return temperature;
}

short Batterie::getCapacity() {
    return capacity;
}