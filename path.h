#ifndef Path_H
#define Path_H
#include "Coor.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

class Path{
	std::vector<Coor> coords;
    
public:
// Constructor
	Path();

	void addPoint(Coor p);
	unsigned int num_points()const;
    double length()const;

	Coor operator()(int k)const;
	Coor& operator[](int k);
};
#endif // Path_H
