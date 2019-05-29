/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Temperature.cpp
 * Author: snir2g1
 * 
 * Created on 21 mars 2019, 17:16
 */

#include "../defs/Temperature.h"

Temperature::Temperature() {
}

Temperature::~Temperature() {
}

void Temperature::recupTempSys() {
    valeur = 36.2;
}

float Temperature::getValue() {
    return valeur;
}