/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Instrument.h
 * Author: snir2g2
 *
 * Created on 14 mars 2019, 17:35
 */

#ifndef INSTRUMENT_H
#define INSTRUMENT_H
#include "Mesure.h"
#include "I2C.h"
#include <iterator>
#include <list>
using namespace std;

class Instrument {
public:
    Instrument();
    Instrument(const Instrument& orig);
    virtual ~Instrument();
    list<Mesure*> getMesures();
    void addMesure(Mesure* uneMesure);
    virtual list <string> obtenirStatus(); //recuperation
    virtual void activer();
    virtual void desactiver();
    virtual void clearMesures();
    
private:
    string type;
    
protected:
    virtual void obtenirMode();         //recuperation  
    virtual void obtenirTempInst();     //recuperation
    list<Mesure*> listedemesures;
    
};

#endif /* INSTRUMENT_H */

