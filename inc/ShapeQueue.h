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

  Shape *GetShape();

  bool IsEmpty();

 int Size();

 void PrintAllShapes();

 void Clear();


protected:
  int size_;
  ShapeNode *headPtr_;
  ShapeNode *tailPtr_;
};

#endif
