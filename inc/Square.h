#ifndef Square.h
#define Square.h
#include <Rectangle.h>

using namespace std;

class Square : public Rectangle {

    public:

        Square(double Base);

    protected:

        virtual void PrintParamLine() const;
};