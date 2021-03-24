/**
  Header file of Hexagon for a polymorphic queue that outputs
  the area and the perimeter of different shapes.
**/
#ifndef HEXAGON_
#define HEXAGON_

#include<iostream>
#include<Shape.h>

using namespace std;

class Hexagon : public Shape  {
public:
  Hexagon(double length);

  virtual double GetArea() const;
  virtual double GetPerimeter() const;

protected:
  double length_;

  void PrintParamLine() const;
};

#endif
