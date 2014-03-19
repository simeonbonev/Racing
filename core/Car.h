#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include <string>
#include <cstring>
#include "Color.h"

class Car {
private:
    char* model;
    int top_speed;
    int acceleration;
    int stability;
    Color* color;
public:
    ~Car();
    Car(char* = NULL, int = 0, int = 0, int = 0, Color* = NULL);
    char* getModel() const;
    int getTopSpeed() const;
    int getAcceleration() const;
    int getStability() const;
    Color* getColor() const;
    void setModel(char*);
    void setTopSpeed(int);
    void setAcceleration(int);
    void setStability(int);
    void setColor(Color*);
};

class Builder
{
public:
    virtual char* getCurrentModel() = 0;
    virtual int getCurrentTopSpeed() = 0;
    virtual int getCurrentAcceleration() = 0;
    virtual int getCurrentStability() = 0;
    virtual Color* getCurrentColor() = 0;
};

class Director
{
    Builder* builder;
    
public:
    void setBuilder(Builder* newBuilder);
    Car* getCar();
};

class MitsubishiEvo9Builder : public Builder {
public:
    virtual char* getCurrentModel();
    virtual int getCurrentTopSpeed();
    virtual int getCurrentStability();
    virtual int getCurrentAcceleration();
    virtual Color* getCurrentColor();
    MitsubishiEvo9Builder();
};
#endif // CAR_H_INCLUDED
