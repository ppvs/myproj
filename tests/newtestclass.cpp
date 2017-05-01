/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass.cpp
 * Author: Tasha
 *
 * Created on 02.05.2017, 1:18:49
 */

#include "newtestclass.h"
#include "myprojc.h"
#include <ostream>

CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

void newtestclass::testMessage() {
    myprojc _myprojc;
    string result = _myprojc.message();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

