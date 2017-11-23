#include "Vector.h"
#include "math.h"

Vector::Vector(): x(0.0), y(0.0) {}
Vector::Vector(double X, double Y): x(X), y(Y) {}

// Operator addition
Vector operator+(const Vector& first,const Vector& second){
    Vector v;
    v.x=first.x+second.x;
    v.y=first.y+second.y;
    return v;
}

// Operator subtraction
Vector operator-(const Vector& first,const Vector& second){
    Vector v;
    v.x=first.x-second.x;
    v.y=first.y-second.y;
    return v;
}

// Operator negation
Vector Vector::operator-()const{
    Vector v;
    v.x=-x;
    v.y=-y;
    return v;
}

// Getter & Setter for field x
double Vector::getX() const { return x; }

void Vector::setX(double x) { this->x = x; }

// Getter & Setter for field y
double Vector::getY() const { return y; }

void Vector::setY(double y) { this->y = y; }

// Public method norm
double Vector::norm()const { return sqrt(x * x + y * y); }
