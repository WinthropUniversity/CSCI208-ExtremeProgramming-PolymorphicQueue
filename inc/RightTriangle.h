#ifndef RIGHTTRIANGLE_H_
#define RIGHTTRIANGLE_H_
#define rightAngle 90

#include<iostream>
#include<Shape.h> //Mathew's File

using namespace std;

class RightTriangle : public Shape {

public:
  double GetBase();
  double SetBase(double inBase);

  double GetHeight();
  double SetHeight(double inHeight);

  double GetArea();
  double GetPerimeter();

  void PrintShapeInfo();
  void AskUserForShapeParameters();

  RightTriangle();

protected:
  double base; //Base gotten from user
  double height; //Height gotten from user

}

#endif
