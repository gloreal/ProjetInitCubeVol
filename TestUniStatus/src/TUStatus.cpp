/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: snir2g2
 *
 * Created on 27 mars 2019, 15:52
 */

#include <cstdlib>

#include "../defs/Status.h"
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Mode select = SLEEP;
    
    Status* unStatus = new Status();
    unStatus->setOnOff(true);
    unStatus->getOnOff();
    unStatus->setMode(select);
    unStatus->getMode();
    cout<<"Le mode du capteur est : "<<select<<endl;
    unStatus->getError();
    unStatus->setTemp(35.4);
    unStatus->getTemp();
    unStatus->~Status();
}

