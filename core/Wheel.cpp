//
//  Wheel.cpp
//  TestMonday
//
//  Created by 101 Dalmatians on 3/23/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//
#include <iostream>
#include "Wheel.h"
using namespace std;



Wheel::Wheel():model("default"), size(19) {
    
}

Wheel::Wheel(int wheelSize) : model("default"), size(wheelSize) {
    
}

Wheel::Wheel(string wheelModel, int wheelSize): size(wheelSize) {
    model = wheelModel;
}

int Wheel::getSize()const {
    return size;
}

string Wheel::getModel()const {
    return model;
}

void Wheel::printWheel() {
    cout<<size<<" "<<model<<endl;
}

bool operator<(const Wheel& a, const Wheel& b) {
    return a.getSize() < b.getSize();
}

Wheel& Wheel::operator= (const Wheel& param) {
    cout<<"INFO: Assignment operator called.";
    size = param.size;
    model = param.model;
    return *this;
}

int Wheel::n = 0;

int Wheel::getN() {
    return n;
}

ostream& operator<< ( ostream& stream, const Wheel& wheel){
    stream<<wheel.getModel()<<'#'<<wheel.getSize()<<'\n';
    return stream;
}

Wheel::~Wheel() {
    
}