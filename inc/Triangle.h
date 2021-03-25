#ifndef TRIANGLE_
#define TRIANGLE_

#include<Shape.h>

using namespace std;

class Triangle : public Shape
{
public:
  Triangle(double inBase, double inHeight);
  double GetBase() const;
  double GetHeight() const;
  virtual double GetArea() const;

protected:
  double base;
  double height;
  string shapeName_;
  virtual void PrintParamLine() const;
};

#endif
