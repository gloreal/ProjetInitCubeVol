/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: snir2g2
 *
 * Created on 27 mars 2019, 15:50
 */

#include <cstdlib>

#include "Instrument.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Instrument* unInstrument = new Instrument();
    unInstrument->getMesures();
    unInstrument->getStatus();
    unInstrument->~Instrument();

    return 0;

}
