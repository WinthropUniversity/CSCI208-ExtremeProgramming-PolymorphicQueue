#ifndef SEMICIRCLE_H_
#define SEMICIRCLE_H_

#include<iostream>
#include<Circle.h>

using namespace std;

class SemiCircle : public Circle {
private:

public:
    double GetArea() const;
    double GetPerimeter() const;
};

#endif