#ifndef TRIANGLE_
#define TRIANGLE_

#include<iostream>
#include<Shape.h>

using namespace std;

class Triangle : public Shape
{
private:
  double base;
  double height;

public:
  Triangle(double inBase, double inHeight);
  double GetBase();
  double GetHeight();
  virtual double GetArea() const;

protected:
  virtual void PrintParamLine() const;
};

#endif
