 # Storage (C++)
 
System of classes to store a sequence of coordinates as a path.
 
 
Class Vector (represents a two-dimensional vector): 
- There is  a constructor with two parameters of type double representing the x and y components of the vector.
- The class has a default constructor that initializes a null vector (0.,0.).
- The component of the vector can be accessed through accessor functions x() and y(). The accessors can be invoked for constant class       instances.
- Plus and minus operators are provided that allow addition, subtraction and negation of vectors in the usual manner. The binary             operators are implemented as global functions. Negation is implemented as a member function.
- There is a const member function norm() that returns the norm (length) of the vector.


Class Coor (represents the coordinates of a point in two dimensions):
- The class has a constructor with two parameters of type double that specify the Cartesian coordinates x and y.
- The class has a default constructor that initializes the  coordinates as (0,0).
- The coordinates of can be accessed through the accessor functions x(), y(). The accessors can be invoked for constant instances of Coor.
- Two objects of type Coor can be subtracted from each other with the minus operator. The result is an object of type Vector.


Class Path (represents a sequence of line elements)
- The uses a dynamic array of type std::vector<Coor> to store a sequence of coordinates.
- The class has a default constructor that creates an empty path (no points).
- There is a member function addPoint() with one argument of type Coor.  The function adds one point to the end of the path. 
- An accessor num_points() returns the number of points currently stored in the path. It returns a non-negative integer. It can be invoked  for const Path instances.
- There is an overloaded subscript operator that returns the coordinates of the k-th point. It can be invoked for const objects and         returns an object of type Coor.
- Another overloaded operator[] can be used with non-const objects only. It returns a reference to the k-th coordinate.
- The member function length() returns the cumulative length of the path (as a double value). It handles the cases of zero and one points   in the path correctly. The function makes use of the functionality of the classes Coor and Vector to perform the calculations.
