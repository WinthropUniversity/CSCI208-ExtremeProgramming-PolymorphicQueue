#include <Rectangle.h>

#include <iostream>

using namespace std;

Rectangle::Rectangle(){
  Length = 0;
  Width = 0;
}

Rectangle:: Rectangle(double inWidth, double inLength)
{
  Length = inLength;
  Width = inWidth;
}

double Rectangle::GetWidth() const {
  return Width;
}


double Rectangle::GetLength() const {
  return Length;
}

double Rectangle::GetArea() const {
return Width * Length;
}

double Rectangle::GetPerimeter() const {
return 2 * (Width + Length);
}

void Rectangle::PrintParamLine() const {
  cout << "    Width = " << GetWidth() << endl;
  cout << "    Length = " << GetLength() << endl;
  //cout << "Area = " << GetArea() << endl;
  //cout << "Perimeter = " << GetPerimeter(); << endl;
}
