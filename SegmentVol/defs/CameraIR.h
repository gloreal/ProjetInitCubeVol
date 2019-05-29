/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CameraIR.h
 * Author: snir2g1
 *
 * Created on 8 avril 2019, 08:59
 */

#ifndef CAMERAIR_H
#define CAMERAIR_H
#include "Instrument.h"

class CameraIR : public Instrument{
public:
    CameraIR();
    CameraIR(const CameraIR& orig);
    virtual ~CameraIR();
    void lireTemperature(int centre[], int rayon);
    void setDateMesure(string datehour);
    void obtenirPixel();
    void activer();
    void desactiver();
    list<string> obtenirStatus();
private:

};

#endif /* CAMERAIR_H */

