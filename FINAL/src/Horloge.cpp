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
    time_t secondes;
    struct tm instant;
    time(&secondes);
    instant = *localtime(&secondes);
    char dh[255] = {};
    char date[255];
    char heure[255];

    sprintf(heure, "%d:%d:%d", instant.tm_hour, instant.tm_min, instant.tm_sec);
    sprintf(date, "%d/%d/%d ", instant.tm_year + 1900, instant.tm_mon + 1, instant.tm_mday);

    strcat(dh, date);
    strcat(dh, heure);
    dateHeure = dh;
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