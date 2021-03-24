#ifndef Square.h
#define Square.h

using namespace std;

class Square : public Rectangle {

    public:

        Square(double Base);
        virtual void Print() const;
};