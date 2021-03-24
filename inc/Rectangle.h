#ifndef Rectangle.h
#define Rectangle.h
#incude <shape.h>


using namespace std;

class Rectangle : public Shape {
private:
  double Width;
  double Length;

public:
  Rectangle(double inWidth, double inLength);
  double GetWidth();
  double GetLength();
  virtual double GetArea();
  virtual double GetPerimeter();

protected:
  virtual void PrintParamLine();
};
