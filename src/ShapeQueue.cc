#include<ShapeQueue.h>

/**
 Shape Queue constructor will initialize head and tail
 pointers to null.  Count is also initialized to zero.
 **/
ShapeQueue::ShapeQueue(){
  headPtr_ = NULL;
  tailPtr_ = NULL;
  size_ = 0;
}


ShapeQueue::~ShapeQueue() {
  Clear();
  headPtr_ == NULL;
  tailPtr_ == NULL;
  size_ = 0;
}


void ShapeQueue::InsertShape(Shape inShapePtr) {
  // Dr. Wiegand?
  // Create a ShapeNode (allocating ShapeNode)
  // Point the next of the the node @tail pointer to the new ShapeNode
  // Point the tail pointer to the new ShapeNode
  // Make sure the new ShapeNode's next points NULL
  // If the list *was* empty, then also point headPtr to the new ShapeNode
  // Increment the size_
}


Shape ShapeQueue::GetShape() {
  // Sky?
  // Get the shape in the head node`
  // Change the head to point to its next node`
  // If there was only one node to begin with, also update tail node ptr
  // Decrement the size_
  // What do we do when the list is empty???
  // Deallocate the ShapeNode
}


bool ShapeQueue::IsEmpty() {
  return (headPtr_ == NULL);
}


int ShapeQueue::Size() {
  return size_;
}


void ShapeQueue::PrintAllShapes() {
  // Leo?
  // Start with a pointer variable at head
  // Loop:
  //   Call the shape's PrintInfo() method
  //   Update pointer variable to the next ShapeNode
  //   Do this until we hit the end
}


void ShapeQueue::Clear() {
  // Tyler?
  // Loop through the list,
  // as long as it isn't empty, get the front node
  //  We have a method for that:  GetShape()
}