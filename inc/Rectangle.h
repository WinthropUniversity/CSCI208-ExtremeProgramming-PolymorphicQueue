#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include<iostream>
#include<Shape.h>

using namespace std;

class Rectangle: public Shape{
public:
  Rectangle();

  double GetLength();
  double SetLength(double Length);

  double GetWidth();
  double SetWidth(double Width);

  double GetArea();
  double GetPerimeter();

  void PrintShapeInfo();
  void AskUseForShapePerimeters();

protected:
  double length;
  double width;
};
#endif
