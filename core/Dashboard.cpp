//
//  Dashboard.cpp
//  TestMonday
//
//  Created by 101 Dalmatians on 4/6/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//
#include <iostream>
#include "Dashboard.h"
using namespace std;
Dashboard::Dashboard() {
    this->engineLight = false;
    this->checkOil = false;
    this->speedGauge = 0;
    this->rpmGauge = 1100;
    this->isMetric = false;
    this->gear = 0;
   this->style = new char[5];
    strcpy(this->style, "aero");
}

Dashboard& Dashboard::setGear(int g){
    this->gear = g;
    return *this;
}

Dashboard& Dashboard::setSpeed(int g){
    this->speedGauge = g;
    return *this;
}

Dashboard& Dashboard::setRpm(int g){
    this->rpmGauge = g;
    return *this;
}

Dashboard& Dashboard::printDashboard(){
    cout<<"engineLight:\t\t\t"<<boolalpha<<engineLight<<endl;
    cout<<"checkOil:\t\t\t"<<checkOil<<endl;
    cout<<"speed:\t\t\t"<<speedGauge<<" kM/h"<<endl;
    cout<<"rpm:\t\t\t"<<rpmGauge<<" rpm"<<endl;
    cout<<"gear:\t\t\t"<<gear<<endl;
    cout<<"style:\t\t\t"<<style<<endl;
    return *this;
}

Dashboard::~Dashboard() {
    delete [] style;
}

Dashboard::Dashboard(const Dashboard& mould): engineLight(mould.engineLight), checkOil(mould.checkOil), speedGauge(mould.speedGauge), rpmGauge(mould.rpmGauge), gear(mould.gear) {
    style = new char[strlen(mould.style)+1];
    strcpy(style, mould.style);
}

Dashboard& Dashboard::operator= (const Dashboard& x) {
    delete [] style;                      // delete currently pointed string
    style = new char[strlen(x.style)+1];
    strcpy(style, x.style);
    engineLight = x.engineLight;
    checkOil = x.checkOil;
    speedGauge = x.speedGauge;
    rpmGauge = x.rpmGauge;
    gear = x.gear;
    return *this;
}