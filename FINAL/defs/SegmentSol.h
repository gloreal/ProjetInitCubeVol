/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SegmentSol.h
 * Author: snir2g1
 *
 * Created on 21 mars 2019, 17:20
 */

#ifndef SEGMENTSOL_H
#define SEGMENTSOL_H
#include "SegmentVol.h"

class SegmentVol;
class SegmentSol {
public:
    SegmentSol(SegmentVol* segemntVol);
    virtual ~SegmentSol();
    void envoyer(string message);
private:
    SegmentVol* segmentVol;
};

#endif /* SEGMENTSOL_H */

