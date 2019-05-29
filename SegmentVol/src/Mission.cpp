/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mission.cpp
 * Author: snir2g1
 * 
 * Created on 21 mars 2019, 17:18
 */

#include "../defs/Mission.h"

Mission::Mission() {
}

Mission::~Mission() {
}

void Mission::setPeriodicity(short period){
    periodicity = period;
}

void Mission::setDuration(short duration){
    this->duration = duration;
}

void Mission::setStartTime(string sTime){
    startTime = sTime;
}

void Mission::setMeasureType(string type){
    measureType = type;
}

short Mission::getPeriodicity(){
    return periodicity;
}

short Mission::getDuration(){
    return duration;
}

string Mission::getStartTime(){
    return startTime;
}

string Mission::getMeasureType(){
    return measureType;
}