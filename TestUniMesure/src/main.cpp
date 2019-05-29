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
#include "Mesure.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Mesure* uneMesure = new Mesure();
    cout<<uneMesure->getMesure()<<endl;
    uneMesure->setDateHour("2019/03/28 15:22:47");
    cout<<uneMesure->getDateHour()<<endl;
    cout<<uneMesure->getUnite()<<endl;
    uneMesure->~Mesure();
    
}

