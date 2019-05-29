/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SegmentSol.cpp
 * Author: snir2g1
 * 
 * Created on 21 mars 2019, 17:20
 */

#include "../defs/SegmentSol.h"

SegmentSol::SegmentSol(SegmentVol* segmentVol) {
    this->segmentVol = segmentVol;
}

SegmentSol::~SegmentSol() {
}

void SegmentSol::envoyer(string message) {
    cout << "Le message envoyé est : " << message << endl;
}