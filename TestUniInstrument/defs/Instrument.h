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
#include "Status.h"
#include "Mesure.h"
#include <list>
using namespace std;

class Instrument {
public:
    Instrument();
    Instrument(const Instrument& orig);
    virtual ~Instrument();
    list<Mesure*> getMesures();
    void addMesure(Mesure* uneMesure);
    Status getStatus(); //requetes
    virtual list <string> obtenirStatus(); //recuperation
    virtual void activer();
    virtual void desactiver();
    
private:
    string type;
    
protected:
    virtual void obtenirMode();         //recuperation  
    virtual void obtenirTempInst();     //recuperation
    Status* status;
    list<Mesure*> listedemesures;
};

#endif /* INSTRUMENT_H */
