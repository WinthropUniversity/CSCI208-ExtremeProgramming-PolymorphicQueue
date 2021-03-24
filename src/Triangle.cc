#include"Triangle.h"
#include<iostream>


Triangle::Triangle(double inBase, double inHeight)
{
    base = inBase;
    height = inHeight;
    shapeName_ = "Triangle";
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
    cout << "The base is " <<  GetBase() <<  endl;
    cout << "The height is " <<  GetHeight() <<  endl;
}

virtual double Triangle::GetArea() const
{
    double area;
    area = ((base / 2.0) * height);
    return area;
}

string Triangle::GetName() const
{
    return shapeName_;
}
