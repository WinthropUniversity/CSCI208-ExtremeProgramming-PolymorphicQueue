#ifndef SEMICIRCLE_H_
#define SEMICIRCLE_H_

#include<iostream>
#include<Circle.h>

using namespace std;

class SemiCircle : public Circle {
private:

public:
    SemiCircle(double inRadius);

    double GetRadius() const;
    virtual double GetArea() const;
    virtual double GetPerimeter() const;

protected:
    double radius_;
    void PrintParamLine() const;
};

#endif
