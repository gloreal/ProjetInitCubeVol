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

#include "../defs/Mesure.h"
#include "../defs/Instrument.h"
#include "../defs/CameraIR.h"

Mesure::Mesure() {
    unit = "Celsius";
}

Mesure::Mesure(const Mesure& orig) {
}

Mesure::~Mesure() {
    cout<<"La mesure est détruite"<<endl;
}

Mesure::Mesure(float valeur){
    value = valeur;
}

void Mesure::setDateHour(string dateHour) {
    this->dateHour = dateHour;
}

string Mesure::getUnite() {
    return unit;
} 

string Mesure::getDateHour() {
    return dateHour;
    cout<<dateHour<<endl;
}

float Mesure::getMesure() {
    return value;
}
