/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CameraIR.cpp
 * Author: snir2g1
 * 
 * Created on 8 avril 2019, 08:59
 */

#include "../defs/CameraIR.h"

CameraIR::CameraIR() {
}

CameraIR::CameraIR(const CameraIR& orig) {
}

CameraIR::~CameraIR() {
}

void CameraIR::lireTemperature(int centre[], int rayon) {
    cout << "Lecture" << endl;
}

void CameraIR::setDateMesure(string datehour) {
    cout << "Horloge : " << datehour << endl;
}

void CameraIR::obtenirPixel() {
    cout << "Affichage des pixels." << endl;
}

void CameraIR::activer() {
    cout << "CameraIR activer" << endl;
}

void CameraIR::desactiver() {
    cout << "CameraIR désactiver" << endl;
}

list<string> CameraIR::obtenirStatus() {
    list<string> obtenirStatus;
    string mode = "normal";
    float temp = 26.4;

    obtenirStatus.push_back(mode);

    string sTemp = to_string(temp);
    obtenirStatus.push_back(sTemp);

    return obtenirStatus;
}