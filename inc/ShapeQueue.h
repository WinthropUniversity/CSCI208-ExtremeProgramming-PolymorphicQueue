#ifndef SHAPEQUEUE_H_
#define SHAPEQUEUE_H_

#include<ShapeNode.h>
#include<Shape.h>

class ShapeQueue {
public:
  // Constructors & Destructors
  ShapeQueue();
  ~ShapeQueue();

  // Queue Operations
  void InsertShape(Shape *inShapePtr);

protected:
  int count_;
  ShapeNode *headPtr;
  ShapeNode *tailPtr;
};

#endif
