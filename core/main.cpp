#include <iostream>
#include "Car.h"
#include "Color.h"
#include "Driver.h"

int main() {
    Color* green = new Color(0, 200, 0);
    Car* c = new Car("Mazda", 300, 2, 12, green);

    Driver* me = new Driver("Rosen", 0.0, 0, c);

    std::cout<<"Driver: "<<me->getName()<<std::endl;
    std::cout<<"Vehicle: "<<c->getModel()<<" "<<c->getTopSpeed()<<" "<<c->getAcceleration()<<std::endl;
    std::cout<<"Color (RGB): "<<c->getColor()->getRed()<<" "<<c->getColor()->getGreen()<<" "<<c->getColor()->getBlue()<<std::endl;


    return 0;
}
