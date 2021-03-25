#ifndef RECTANGLE_
#define RECTANGLE_
#include <Shape.h>


using namespace std;

class Rectangle : public Shape {
private:
  double Width;
  double Length;

public:
  Rectangle();
  Rectangle(double inWidth, double inLength);
  double GetWidth() const;
  double GetLength() const;
  virtual double GetArea() const;
  virtual double GetPerimeter() const;

protected:
  virtual void PrintParamLine() const;
};

#endif