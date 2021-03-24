#include"Triangle.h"
#include<iostream>

double Triangle::GetBase()
{
    return base;
}

double Triangle::GetHeight()
{
    return height;
}

virtual void PrintParamLine()
{
    cout << "The area of " << shapeName_ << "is " << GetArea() << endl;
}

virtual double GetArea()
{
  double area;
  area = ((base / 2) * height);
  return area;
}
