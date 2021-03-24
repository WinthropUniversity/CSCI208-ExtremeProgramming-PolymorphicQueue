#ifndef SEMICIRCLE_H_
#define SEMICIRCLE_H_

#include<iostream>
#include<Circle.h>

using namespace std;

/**
 * This is an abstract base class for two dimensional
 * shapes.
 **/
class SemiCircle : public Circle {
private:

public:
    SemiCircle(double inRadius);

    virtual double GetArea() const;
    virtual double GetPerimeter() const;
};

#endif
