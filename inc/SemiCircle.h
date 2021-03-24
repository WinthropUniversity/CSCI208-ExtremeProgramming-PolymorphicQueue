#ifndef SEMICIRCLE_H_
#define SEMICIRCLE_H_

#include<iostream>
#include<Circle.h>

using namespace std;

class SemiCircle : public Circle {
private:

public:
    SemiCircle(double inRadius);

    virtual double GetArea() const;
    virtual double GetPerimeter() const;
};

#endif
