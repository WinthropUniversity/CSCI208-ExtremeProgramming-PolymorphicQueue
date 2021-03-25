#ifndef SQUARE_H_
#define SQUARE_H_

#include <Rectangle.h>

using namespace std;

class Square : public Rectangle {

    public:

        Square(double Base);

    protected:

        virtual void PrintParamLine() const;
};

#endif