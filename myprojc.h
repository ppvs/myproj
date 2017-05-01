/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myprojc.h
 * Author: Tasha
 *
 * Created on 2 мая 2017 г., 0:32
 */

#ifndef MYPROJC_H
#define MYPROJC_H

#include <iostream>

using namespace std;

class myprojc {
public:
    myprojc();
    myprojc(const string& aWho);
    myprojc(const myprojc& orig);
    virtual ~myprojc();
    string message() const;
private:
    string who;
};

#endif /* MYPROJC_H */

