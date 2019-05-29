/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StatusPhantom.cpp
 * Author: snir2g2
 * 
 * Created on 27 mars 2019, 13:19
 */

#include "../defs/Status.h"
#include <iostream>
using namespace std;

Status::Status() {
    cout<<"Creation d'une instance de Status"<<endl;
}

Status::Status(const Status& orig) {
}

Status::~Status() {
    cout<<"Destruction de Status"<<endl;
}

void Status::setMode(Mode mode) {
    this->mode = mode;
}

float Status::getTemp() {
    cout<<"La température est de : "<<temperature<<endl;
    return temperature;
}


Mode Status::getMode() {
    return mode;
}

void Status::setOnOff(bool OnOff) {
    cout<<"Affectation de la valeur Allumer / Eteindre"<<endl;
    this->OnOff = OnOff;
}

int Status::getError() {
    cout<<"Affichage des erreurs"<<endl;
    return error;
}

bool Status::getOnOff() {
    cout<<"Affichage de l'état de l'instrument Allumé / Eteint"<<endl;
    return OnOff;
}

void Status::setTemp(float Temp){
    temperature = Temp;
}
