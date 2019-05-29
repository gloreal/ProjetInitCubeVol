/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Temperature.h
 * Author: snir2g1
 *
 * Created on 21 mars 2019, 17:16
 */

#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>

using namespace std;

class Temperature {
public:
    Temperature();
    virtual ~Temperature();
    void recupTempSys();
    float getValue();
private:
    float valeur;
};

#endif /* TEMPERATURE_H */

