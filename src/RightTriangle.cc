#include <RightTriangle.h>

// To-Do: Complete functions for body file
using namespace std;

double GetBase() {
	return inBase; }

double SetBase(double inBase) {
	base = inBase; }

double GetHeight() {
	return inHeight; }

double SetHeight(double inHeight) {
	height = inHeight; }

double GetArea() {

double GetPerimeter() {

void PrintShapeInfo() {
cout << "Shape: Right Triangle" << endl;
cout << "Base: " << this->GetBase() << endl;
cout << "Height: " << this->GetArea() << endl;
cout << "Area: " << this->GetArea() << endl;
cout << "Perimeter: " << this->GetPerimeter() << endl;
}

void AskUserForShapeParameters() {
cout << "What is the base of the triangle?" << endl;
double inBase;
cin >> inBase;
this->SetBase(inBase);
cout << "What is the height of the triangle?" << endl;
double inHeight;
cin >> inHeight;
this->SetHeight(inHeight);
}
