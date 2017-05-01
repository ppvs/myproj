/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myprojc.cpp
 * Author: Tasha
 * 
 * Created on 2 мая 2017 г., 0:32
 */

#include "myprojc.h"

myprojc::myprojc() {
}
myprojc::myprojc(const string& aWho)
{
    who = aWho;
}
myprojc::myprojc(const myprojc& orig) {
}

myprojc::~myprojc() {
}

string myprojc::message() const
{
    return (string)"Hello " + who;
}
