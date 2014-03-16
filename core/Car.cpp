#include "Car.h"
#include <cstring>
#include <iostream>

Car::~Car() {
    std::cout<<"Car destroyed!"<<std::endl;
    delete[] model;
}

Car::Car(char* _model, int _top_speed,
         int _acceleration, int _stability, Color* _color) : model(NULL),
                                                            top_speed(_top_speed),
                                                            acceleration(_acceleration),
                                                            stability(_stability),
                                                            color(_color)
{
    setModel(_model);
}

char* Car::getModel() const {
    return model;
}

int Car::getTopSpeed() const {
    return top_speed;
}

int Car::getAcceleration() const {
    return acceleration;
}

int Car::getStability() const {
    return stability;
}

Color* Car::getColor() const {
    return color;
}

void Car::setModel(char* value) {
    if(model != NULL) {
        delete[] model;
    }
    model = new char[sizeof(value)/sizeof(char)];
    strcpy(model, value);
}

void Car::setTopSpeed(int value) {
    top_speed = value;
}

void Car::setAcceleration(int value) {
    acceleration = value;
}

void Car::setStability(int value) {
    stability = value;
}

void Car::setColor(Color* value) {
    color = value;
}

