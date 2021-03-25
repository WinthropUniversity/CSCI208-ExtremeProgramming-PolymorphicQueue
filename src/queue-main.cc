#include<iostream>
#include<ShapeQueue.h>
#include<Shape.h>
#include<RightTriangle.h>
#include<Circle.h>
#include<Rectangle.h>
#include<SemiCircle.h>
#include<EquilateralTriangle.h>
#include<Square.h>
#include<Hexagon.h>

using namespace std;

/**
     * Get Shape info
     * Store Shapes in queue
     * Print all shape info
     * menu/user - Driven
  **/
int main(int argc, char **argv) {

  /* Create a ShapeQueue, and populate it */
  ShapeQueue Queue;

  /* Pointers to Shapes are created and filled with random values for testing */
  Queue.InsertShape(new Circle(15.4));
  Queue.InsertShape(new SemiCircle(7.5));
  Queue.InsertShape(new RightTriangle(6.0, 4.2));
  Queue.InsertShape(new EquilateralTriangle(2.0, 3.9));
  Queue.InsertShape(new Rectangle(24.7, 12.8));
  Queue.InsertShape(new Square(5.0));
  Queue.InsertShape(new Hexagon(13.3));

  /* Print all the shape info */
  Queue.PrintAllShapes();

  // Everything is okay
  return 0;
}
