#ifndef SHAPE_H
#define SHAPE_H
#include <string>

using namespace std;

// This code snippet was written by Jasmen & Matthew (11/2/2020)
// To-Do: Begin implementing body code for Shape.cc! 
//
// 

class Shape {

    public:
  
    Shape();
    string GetColor(string);

    virtual double GetArea() = 0;
    virtual double GetPerimeter() = 0;

    protected:

    string color;
    
} 





#endif
