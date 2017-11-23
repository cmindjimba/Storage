#include "Coor.h"
#include "Path.h"

// Constructor
Path::Path(){}

//Member function addPoint() with one argument of type Coor.
// The function adds one point to the end of the path.
void Path::addPoint(Coor p){
    coords.push_back(p);
}
unsigned int Path::num_points()const{
	return (unsigned int)coords.size();
}

//Member function length() returns the cumulative length of the path (as a double value).
double Path::length()const{
    double len=0.0;
    if(num_points()<=1)
        return 0;
    
    for(int i=0; i<num_points()-1;i++)
        len+=(coords[i+1]-coords[i]).norm();
    return len;
}

//Overloaded subscript operator that returns the coordinates of the k-th point.
//It can be invoked for const objects and returns an object of type Coor.
Coor Path::operator()(int k)const{
	return coords[k];
}

//Overloaded operator[] can be used with non-const objects only.
//It returns a reference to the k-th coordinate.
Coor& Path::operator[](int k){
 return coords[k];
}
