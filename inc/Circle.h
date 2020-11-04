#ifndef CIRCLE_H_
#define CIRCLE_H_
#define PI 3.141592653589

#include <Shape.h>

class Circle : public Shape {

  public:
	Circle(double radius);
	double GetRadius();
	//double SetRadius(double radius);
	double GetArea() const;
	double GetPerimeter() const;

  protected:
	double radius_;

};

#endif //CIRCLE_H_
