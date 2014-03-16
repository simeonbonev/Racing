#ifndef DRIVER_H_INCLUDED
#define DRIVER_H_INCLUDED

#include "Car.h"

class Driver {
    private:
        char* name;
        double rating;
        int level;
        Car* vehicle;
    public:
        Driver(char* = NULL, double = 0.0, int = 0, Car* = NULL);
        ~Driver();
        char* getName() const;
        double getRating() const;
        int getLevel() const;
        Car* getVehicle() const;
        void setName(char*);
        void setRating(double);
        void setLevel(int);
        void setVehicle(Car*);
};



#endif // DRIVER_H_INCLUDED
