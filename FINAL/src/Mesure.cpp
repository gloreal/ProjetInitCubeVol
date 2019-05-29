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

Mesure::Mesure() {
    unit = "Celsius";
    cout<<"L'unité de la mesure est le Celsius"<<endl;
}

Mesure::~Mesure() {
    cout<<"La mesure est détruite"<<endl;
}

Mesure::Mesure(float valeur){
    value = valeur;
    cout<<"Stockage de la mesure dans la variable value"<<endl;
}

void Mesure::setDateHour(string dateHour) {
    this->dateHour = dateHour;
    cout<<"Attribution de la date et de l'heure"<<endl;
}

string Mesure::getUnite() {
    return unit;
    cout<<"Retourne l'unité"<<endl;
} 

string Mesure::getDateHour() {
    return dateHour;
    cout<<dateHour<<endl;
    cout<<"Retourne et affiche la date et l'heure"<<endl;
}

float Mesure::getMesure() {
    return value;
    cout<<"Retourne la mesure"<<endl;
}