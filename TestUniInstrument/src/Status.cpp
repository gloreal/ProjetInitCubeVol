/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Status.cpp
 * Author: snir2g2
 * 
 * Created on 14 mars 2019, 17:39
 */

#include "Status.h"

Status::Status() {
}

Status::Status(const Status& orig) {
}

Status::~Status() {
}

void Status::setMode(Mode mode) {
    this->mode = mode;
}

float Status::getTemp() {
    return temperature;
}

Mode Status::getMode() {
    return mode;
}

void Status::setOnOff() {
    
}

int Status::getError() {
    
}

bool Status::getOnOff() {
    
}