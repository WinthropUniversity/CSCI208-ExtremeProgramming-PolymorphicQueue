#include <Rectangle.h>

#include <iostream>

using namespace std;

double Rectangle::GetWidth() {
  return Width;
}


double Rectangle::GetLength() {
  return Length;
}

double Rectangle::GetArea() const {
return Width * Length;
}

double Rectangle::GetPerimeter() const {
return 2 * (Width + Length);
}
