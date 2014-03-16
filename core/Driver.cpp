#include "Driver.h"
#include <cstring>
#include <iostream>


Driver::Driver(char* _name, double _rating,
               int _level, Car* _vehicle) : name(NULL),
                                           rating(_rating),
                                           level(_level),
                                           vehicle(_vehicle)
{
    setName(_name);
}
Driver::~Driver() {
    std::cout<<"Driver destroyed!"<<std::endl;
    delete[] name;
}
char* Driver::getName() const {
    return name;
}
double Driver::getRating() const {
    return rating;
}
int Driver::getLevel() const {
    return level;
}
Car* Driver::getVehicle() const {
    return vehicle;
}
void Driver::setName(char* value) {
    if(name != NULL) {
        delete[] name;
    }
    name = new char[sizeof(value)/sizeof(char)];
    strcpy(name, value);
}
void Driver::setRating(double value) {
    rating = value;
}
void Driver::setLevel(int value) {
    level = value;
}
void Driver::setVehicle(Car* value) {
    vehicle = value;
}
