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
    setAddrRegistre(0x41);
    ecrire();
    char* niveau = lire();
    chargingLevel = niveau[0];
}

void Batterie::obtenirCourant() {
    setAddrRegistre(0x4B);
    ecrire();
    char* courant = lire();
    amperage = (courant[1] << 8) | courant[0];
}

void Batterie::obtenirTemperature() {
    setAddrRegistre(0x47);
    ecrire();
    char* temp = lire();
    temperature = (temp[1] << 8) | temp[0];
}

void Batterie::obtenirCharge() {
    setAddrRegistre(0x40);
    ecrire();
    char* stat = lire();
    short statu = (stat[0] >> 2) & 0x03;
    if (statu == 1) {
        inCharge = true;
    } else {
        inCharge = false;
    }
}

void Batterie::obtenirTension() {
    setAddrRegistre(0x49);
    ecrire();
    char* tension = lire();
    voltage = ((tension[1] << 8) | tension[0]) / 1000.0;
}

void Batterie::obtenirStatus() {
    setAddrEsclave(0x14);

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
