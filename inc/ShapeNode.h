#ifndef SHAPENODE_H_
#define SHAPENODE_H_

#include<Shape.h>

/**
  This class implements the node structures for the Shape Queue.  Each
  node contains a pointer to shape and a pointer to the next node.
 **/
class ShapeNode {
public:
  // Constructors & Destructors
  ShapeNode();
  ShapeNode(Shape *inShapePtr);
  ShapeNode(Shape *inShapePtr, ShapeNode *inNodePtr);
  ~ShapeNode();

  // Accessor/Mutator Methods
  Shape *GetShape();
  ShapeNode *GetNextNode();
  void SetNextNode(ShapeNode *inNodePtr);

private:
  Shape *shapePtr_;
  ShapeNode *nextPtr_;
};

#define
