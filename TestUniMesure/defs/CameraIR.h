/*                                                        
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*                                  
 * File:   CameraIR.h
 * Author: snir2g2
 *                           
 * Created on 14 mars 2019, 17:40
 */

#ifndef CAMERAIR_H
#define CAMERAIR_H
#include "Instrument.h"
#include "Mode.h"
using namespace std;

class CameraIR : public Instrument{
public:
    CameraIR();
    CameraIR(const CameraIR& orig);
    virtual ~CameraIR();
    void lireTemperature(int centre[], int rayon);
    void setDateMesure(string dateHour);
    void obtenirPixels();
    void activer();
    void desactiver();
    list<string> obtenirStatus();
    float *getPixels();
    float getMoyenne();
    
private:
    float pixels[64];
    float moyenne;
    Mode mode;
    float TempInst;
    
protected:
    void obtenirMode();
    void obtenirTempInst();
};

#endif /* CAMERAIR_H */                                                          

