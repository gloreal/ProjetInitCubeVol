/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mesure.cpp
 * Author: snir2g2
 * 
 * Created on 14 mars 2019, 17:40
 */

#include "Mesure.h"
#include "Instrument.h"
#include "CameraIR.h"

Mesure::Mesure() {
}

Mesure::Mesure(const Mesure& orig) {
}

Mesure::~Mesure() {
}

Mesure::Mesure(float valeur){
    value = valeur;
}

void Mesure::setDateHour(string dateHour) {
    this->dateHour = dateHour;
}

string Mesure::getUnit() {
    return unit;
} 

string Mesure::getDateHour() {
    return dateHour;
}

float Mesure::getMesure() {
    return value;
}