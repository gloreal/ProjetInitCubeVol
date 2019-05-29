/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   I2C.cpp
 * Author: snir2g1
 * 
 * Created on 14 mars 2019, 16:14
 */

#include "../defs/I2C.h"

I2C::I2C() {
}

I2C::~I2C() {
}

void I2C::ouvrirAcces() {
    chemin = open("/dev/i2c-1", O_RDWR);
    if (chemin < 0) {
        perror("open");
    }
}

void I2C::setAddr(unsigned char addr) {
    address = addr;
}

void I2C::connexion() {
    if (ioctl(chemin, I2C_SLAVE, address) < 0) {
        perror("ioctl");
    }
}

void I2C::setAddrRegistre(unsigned char reg) {
    addrRegistre = reg;
}

void I2C::ecrire() {
    write(chemin, &addrRegistre, 1);
}

char* I2C::lire() {
    if (read(chemin, valeur, 2) <= 0) {
        perror("read");
    } else {
        return valeur;
    }
    return NULL;
}

void I2C::fermerAcces() {
    close(chemin);
}
