/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ordinateur.h
 * Author: snir2g1
 *
 * Created on 21 mars 2019, 17:20
 */

#ifndef ORDINATEUR_H
#define ORDINATEUR_H
#include <list>
#include <iterator>

using namespace std;

class Ordinateur {
public:
    Ordinateur();
    Ordinateur(const Ordinateur& orig);
    virtual ~Ordinateur();
    list<string> obtenirStatus();
private:

};

#endif /* ORDINATEUR_H */

