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

int I2C::ouvrirAcces() {
    int fd = open("/dev/i2c-1", O_RDWR);
    if (fd < 0) {
        openlog("I2C : ", LOG_PID, LOG_LOCAL0);
        syslog(LOG_ERR, "open");
        closelog();
    } else {
        return fd;
    }
    return -1;
}

void I2C::setAddrEsclave(unsigned char addr) {
    address = addr;
}

void I2C::configurerAddrEsclave(int chemin) {
    if (ioctl(chemin, I2C_SLAVE, address) < 0) {
        openlog("I2C : ", LOG_PID, LOG_LOCAL0);
        syslog(LOG_ERR, "ioctl");
        closelog();
    }
}

void I2C::setAddrRegistre(unsigned char reg) {
    addrRegistre = reg;
}

void I2C::ecrire() {
    int cheminAcces = ouvrirAcces();
    configurerAddrEsclave(cheminAcces);
    write(cheminAcces, &addrRegistre, 1);
    fermerAcces(cheminAcces);
}

char* I2C::lire() {
    int cheminAcces = ouvrirAcces();
    configurerAddrEsclave(cheminAcces);
    if (read(cheminAcces, valeur, 2) <= 0) {
        openlog("I2C : ", LOG_PID, LOG_LOCAL0);
        syslog(LOG_ERR, "read");
        closelog();
    } else {
        return valeur;
    }
    return NULL;
    fermerAcces(cheminAcces);
}

void I2C::fermerAcces(int chemin) {
    close(chemin);
}
