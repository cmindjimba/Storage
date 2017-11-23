#ifndef Vector_H
#define Vector_H
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Vector{
	double x;
	double y;

public:
	Vector();
	Vector(double x, double y);

    friend Vector operator+(const Vector& first,const Vector& second);
    friend Vector operator-(const Vector& first,const Vector& second);
	Vector operator-()const;
	
// Getter & Setter for field x
	double getX()const;
	void setX(double x);

// Getter & Setter for field y
	double getY()const;
	void setY(double y);

	double norm()const;
};
#endif // Vector_H
