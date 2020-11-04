#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <Shape.h>

class Circle : public Shape {

  public:
	//Constructor
	Circle();
	//Accessor Methods
	double GetRadius();
	double SetRadius(double radius);
	double GetArea();
	double GetPerimeter();

	void PrintShapeInfo();
	void AskUserForShapeParameters();

  protected:
	double radius_;

};

#endif //CIRCLE_H_
