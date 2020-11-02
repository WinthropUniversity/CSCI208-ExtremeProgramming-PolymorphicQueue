#ifndef SHAPE_H
#define SHAPE_H
#include <string>

using namespace std;

class Shape {

    public:
  
    // Default constructor 
    Shape();

    string GetColor(string);

    // To be inherited into other classes
    virtual double GetArea() = 0;
    virtual double GetPerimeter() = 0;

    protected:

    string color;
    
} 





#endif
