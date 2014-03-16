#include "Color.h"
#include <iostream>

Color::Color(int r, int g, int b) : red(r), green(g), blue(b) { }

Color::~Color() {
    std::cout<<"Color destroyed!"<<std::endl;
}

void Color::setRed(int value) {
    red = value;
}
void Color::setGreen(int value) {
    green = value;
}
void Color::setBlue(int value) {
    blue = value;
}
int Color::getRed() const {
    return red;
}
int Color::getGreen() const {
    return green;
}
int Color::getBlue() const {
    return blue;
}
