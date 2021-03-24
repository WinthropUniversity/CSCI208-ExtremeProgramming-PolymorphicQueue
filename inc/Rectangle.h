#ifndef RECTANGLE_
#define RECTANGLE_
#incude <shape.h>


using namespace std;

class Rectangle : public Shape {
private:
  double Width;
  double Length;

public:
  Rectangle();
  Rectangle(double inWidth, double inLength);
  double GetWidth();
  double GetLength();
  virtual double GetArea() const;
  virtual double GetPerimeter() const;

protected:
  virtual void PrintParamLine() const;
};
