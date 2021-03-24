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
  virtual double GetArea() const;
  virtual double GetPerimeter() const;

protected:
  virtual void PrintParamLine() const;
};
