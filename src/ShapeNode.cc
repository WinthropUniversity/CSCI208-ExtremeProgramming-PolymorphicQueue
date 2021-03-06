#include<ShapeNode.h>

/**
 Default constructor for the ShapeNode used in the ShapeQueue.  This
 default constructor sets the pointer to Shape and the next node to NULL
 **/
ShapeNode::ShapeNode() {
  shapePtr_ = NULL;
  nextPtr_ = NULL;
}


/**
 Initialization constructor that assigns the shape pointer.  The pointer to
 the next node is set to NULL.  The Node class *does not* take over responsibility for
 deallocating the shape, and wont deallocate it on destruction.
  @param inShapePtr A pointer a shape node to store a shape.
 **/
ShapeNode::ShapeNode(Shape *inShapePtr) {
  shapePtr_ = inShapePtr;
  nextPtr_ = NULL;
}


/**
 Initialization constructor that assigns the shape and next pointers.  The Node
 class *does not* take over responsibility for deallocating the shape, and wont deallocate
 it on destruction.
  @param inShapePtr A pointer a shape node to store a shape.
  @param inNodePtr A pointer the the next node.
  **/
ShapeNode::ShapeNode(Shape *inShapePtr, ShapeNode *inNodePtr) {
  shapePtr_ = inShapePtr;
  nextPtr_ = inNodePtr;
}


/**
 The destructor for the node will deallocate a shape, but not the shape pointer.
 **/
ShapeNode::~ShapeNode() {
  // Deallocate the shape pointer, if it exists
  //if (shapePtr_) delete shapePtr;

  shapePtr_ = NULL;
  nextPtr_  = NULL;
}


/**
 Return the pointer to shape.  BE CAREFUL:  The node does not assume responsibility
 for deallocating a shape, so calling code must deallocate the shape.
   @return A pointer to a shape object
 **/
Shape *ShapeNode::GetShape() {
  return shapePtr_;
}


/**
 Get the pointer to the next node in the linked list.
   @return A pointer to a ShapeNode object
 **/
ShapeNode *ShapeNode::GetNextNode() {
  return nextPtr_;
}


/**
 This function allows the external caller to set the pointer to
 the next node in the linked list.
   @param inNodePtr The node pointer value assigned to the internal next pointer
 **/
void ShapeNode::SetNextNode(ShapeNode *inNodePtr) {
  nextPtr_ = inNodePtr;
}
