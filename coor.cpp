#include "Coor.h"

// Constructors
Coor::Coor(): x(0.0), y(0.0){}

Coor::Coor(double X, double Y): x(X), y(Y){}

// Operators - (subtraction) 
Vector Coor::operator-(const Coor& second)const {
    Vector v;
    v.setX(x-second.x);
    v.setY(y-second.y);
    return v;
}

// Getter & Setter for field x
double Coor::getX() const{ 
     return x;
}
void Coor::setX(double x) { 
     this->x = x;
}

// Getter & Setter for field y
double Coor::getY() const{ 
     return y;
}
void Coor::setY(double y) { 
     this->y = y;
}
