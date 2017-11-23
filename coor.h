#ifndef Coor_H
#define Coor_H
#include "Vector.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Coor{
	double x;
	double y;

public:
	Coor();
	Coor(double x, double y);

// Operators -
	Vector operator-(const Coor& second)const;
   
// Getter & Setter for field x
	double getX()const;
	void setX(double x);


// Getter & Setter for field y
	double getY()const;
	void setY(double y);

};
#endif // Coor_H
