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


#endif // CAR_H_INCLUDED
