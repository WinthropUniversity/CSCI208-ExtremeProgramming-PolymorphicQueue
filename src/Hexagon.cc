/**
  Header file of Hexagon for a polymorphic queue that outputs
  the area and the perimeter of different shapes.
**/
#include <Hexagon.h>

Hexagon::Hexagon(double length) : length_(length) {
  shapeName_ = "Hexagon";
}

void Hexagon::PrintParamLine() const {
  cout << "           Length: " << length_ << endl;
}

/**
  Area of a hexagon is ((3 * Sqrt(3)/2) * length^2)
  I do not feel like including cmath, so I took the
  square root of three and am inserting it as a
  decimal. Length^2 will also just be length * length
**/
double Hexagon::GetArea() const {
  return ((3 * 1.73205/2) * (length_ * length_));
}

/**
  Perimeter of a hexagon is length * 6
**/
double Hexagon::GetPerimeter() const {
  return 6.0 * length_;
}
