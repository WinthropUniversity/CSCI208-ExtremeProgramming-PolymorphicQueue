#include"Triangle.h"
#include<iostream>


Triangle::Triangle(double inBase, double inHeight)
{
    base = inBase;
    height = inHeight;
    shapeName_ = "Triangle";
}

double Triangle::GetBase() const
{
    return base;
}

double Triangle::GetHeight() const
{
    return height;
}

void Triangle::PrintParamLine() const
{
    cout << "    The base is " <<  GetBase() <<  endl;
    cout << "    The height is " <<  GetHeight() <<  endl;
}

double Triangle::GetArea() const
{
    double area;
    area = ((base / 2.0) * height);
    return area;
}

