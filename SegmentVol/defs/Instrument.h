/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Instrument.h
 * Author: snir2g1
 *
 * Created on 21 mars 2019, 17:17
 */

#ifndef INSTRUMENT_H
#define INSTRUMENT_H
#include <iostream>
#include <string>
#include <list>

using namespace std;

class Instrument {
public:
    Instrument();
    Instrument(const Instrument& orig);
    virtual ~Instrument();
    virtual void activer();
    virtual void desactiver();
    virtual list<string> obtenirStatus();
private:

};

#endif /* INSTRUMENT_H */

