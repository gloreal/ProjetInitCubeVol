/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Horloge.cpp
 * Author: snir2g1
 * 
 * Created on 20 mars 2019, 16:10
 */

#include "../defs/Horloge.h"

Horloge::Horloge() {
}

Horloge::~Horloge() {
}

void Horloge::lire() {
    dateHeure = "2019/5/20 8:45:00";
}

void Horloge::setRdvTime(string rdvTime) {
    this->rdvTime = rdvTime;
}

string Horloge::getRdvTime() {
    return rdvTime;
}

string Horloge::getDateHeure() {
    return dateHeure;
}