#ifndef CIRCLE_H_
#define CIRCLE_H_
#define PI 3.141592653589

#include <Shape.h>

class Circle : public Shape {

  public:
	Circle(double radius);
	GetRadius();
	SetRadius(double radius);
	GetArea();
	GetPerimeter();

  protected:
	radius_;

};

#endif //CIRCLE_H_
