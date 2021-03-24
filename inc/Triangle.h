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
  string GetName() const;

protected:
  string shapeName_;
  virtual void PrintParamLine() const;
};

#endif
