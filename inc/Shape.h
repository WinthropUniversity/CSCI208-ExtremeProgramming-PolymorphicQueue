#ifndef SHAPE_
#define SHAPE_

#include <iostream>

using namespace std;


class Shape {
public:
  /*Virtual functions to be used in derived classes.
  Deals with getting area and perimeter of shapes*/
  virtual double GetArea() const = 0;
  virtual double GetPerimeter() const = 0;

  /*Functions that are to be implemented into Shape.
  Gets the name of the shape and the print info*/
  string GetName() const;
  void Print() const;


protected:

  string shapeName_;

  //Virtual function for derived class
  virtual void PrintParamLine() const = 0;

};

#endif
