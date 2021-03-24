
#include <iostream>
#include <Square.h>

using namespace std;

Square::Square(double Base) : Rectangle( Base, Base) {
    shapeName_ = "square";
}

void Square::Print() {
    cout << GetName() << ": " << endl;
    cout << "Side Length: " << GetWidth() << endl;
}