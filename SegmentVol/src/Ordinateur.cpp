/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ordinateur.cpp
 * Author: snir2g1
 * 
 * Created on 21 mars 2019, 17:20
 */

#include "../defs/Ordinateur.h"

Ordinateur::Ordinateur() {
}

Ordinateur::Ordinateur(const Ordinateur& orig) {
}

Ordinateur::~Ordinateur() {
}

list<string> Ordinateur::obtenirStatus() {
    list<string> obtenirStatus;
    int libre = 7;
    int total = 8;
    string unite = "Giga";
    float temp = 35.2;
    string dh = "02/06/20 15:34:29";
    int nb = 5;

    string sLibre = to_string(libre);
    obtenirStatus.push_back(sLibre);

    string sTotal = to_string(total);
    obtenirStatus.push_back(sTotal);

    obtenirStatus.push_back(unite);

    string sTemp = to_string(temp);
    obtenirStatus.push_back(sTemp);

    obtenirStatus.push_back(dh);
    
    string snb = to_string(nb);
    obtenirStatus.push_back(snb);
    
    return obtenirStatus;
}