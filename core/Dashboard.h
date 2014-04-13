//
//  Dashboard.h
//  TestMonday
//
//  Created by 101 Dalmatians on 4/6/14.
//  Copyright (c) 2014 101 Dalmatians. All rights reserved.
//

#ifndef __TestMonday__Dashboard__
#define __TestMonday__Dashboard__

#include <iostream>
class Dashboard {
    bool engineLight;
    bool checkOil;
    int speedGauge;
    int rpmGauge;
    bool isMetric;
    int gear;
    char* style;
public:
    Dashboard();
    Dashboard(const Dashboard&);
    ~Dashboard();
    Dashboard& operator= (const Dashboard&);
    Dashboard& setGear(int);
    Dashboard& setSpeed(int);
    Dashboard& setRpm(int);
    Dashboard& printDashboard();

};
#endif /* defined(__TestMonday__Dashboard__) */
