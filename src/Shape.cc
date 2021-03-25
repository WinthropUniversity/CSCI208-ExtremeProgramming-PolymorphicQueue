/**
  Body file of Shape for a polymorphic queue that outputs
  the area and the perimeter of different shapes.
**/
#include <Shape.h>

#include<iostream>
using namespace std;

/**
  Gets the shape name and returns it as a string
**/
string Shape::GetName() const {
  return shapeName_;
}

/**
  Print info prints out the name of the shape being used
  and outputs the area and the perimeter
**/
void Shape::Print() const {
  cout << "Shape being calculated is a: " << GetName() << endl;
  PrintParamLine();
  cout << "      The area is: " << GetArea() << endl;
  cout << " The perimeter is: " << GetPerimeter() << endl;
  cout << endl;
}
