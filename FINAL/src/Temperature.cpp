/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Temperature.cpp
 * Author: Lucas MARYNUS
 * 
 * Created on 14 mars 2019, 15:08
 */

#include "../defs/Temperature.h"
#include "../defs/I2C.h"


Temperature::Temperature() {
}

Temperature::Temperature(const Temperature& orig) {
}

Temperature::~Temperature() {
}

void Temperature::recupTempSys(){
    setAddrEsclave(0x18);
    setAddrRegistre(0x05);
    ecrire();
    char* valeurLue = lire();
    
    for(int i = 0; i < 2; i++){
    }
    
    if((valeurLue[0] & 0x10) == 0x10){
			
        //TEMPERATURE NÉGATIVE
        temperaturesys = (float) ( 256.0 - ( ( ( 0x0F & valeurLue[0] ) * 16.0 ) + ( valeurLue[1] / 16.0 ) ) );
		
    }else{
			
        //TEMPERATURE POSITIVE
        temperaturesys = (float) ( ( 0x0F & valeurLue[0] ) * 16.0  +  valeurLue[1] / 16.0  );
			
    }
}

float Temperature::getTemperature(){
    return this->temperaturesys;
}
