#include"Triangle.h"
#include<iostream>


Triangle::Triangle(double inBase, double inHeight)
{
    base = inBase;
    height = inHeight;
}

double Triangle::GetBase()
{
    return base;
}

double Triangle::GetHeight()
{
    return height;
}

virtual void Triangle::PrintParamLine()
{
    cout << "The area of " << shapeName_ << "is " << GetArea() << endl;
}

virtual double Triangle::GetArea()
{
    double area;
    area = ((base / 2) * height);
    return area;
}

string Triangle::GetName() const
{
    return shapeName_;
}
