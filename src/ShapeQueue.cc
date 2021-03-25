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


/**
 This method inserts a new node with a shape pointer
 into the queue at the end.  The size will be
 incremented by one after the insert.
   @param inShapePtr The shape pointer to add to the queue
 **/
void ShapeQueue::InsertShape(Shape *inShapePtr) {
  ShapeNode *newNode = new ShapeNode(inShapePtr);

  //case 1:  The list empty
  if  ( (headPtr_ == NULL) && (tailPtr_ == NULL) ) {
    headPtr_ = newNode;
    tailPtr_ = newNode;
  }

  // case 2: There's one item in the list
  else if ( headPtr_ == tailPtr_) {
    tailPtr_ = newNode;
    headPtr_->SetNextNode(newNode);
  }

  // case 3: Everything else
  else {
    ShapeNode *oldTailNode = tailPtr_;
    oldTailNode->SetNextNode(newNode);
    tailPtr_ = newNode;
  }

  // Increment the size of the list by one
  size_++;
}


/**
 Remove the front item of the list and return that shape.  If the list is
 empty, return NULL.
   @return A shape pointer stored in the front of the list.
 **/
Shape *ShapeQueue::GetShape() {
  Shape *returnShapePtr = NULL;

  // If the list is already empty, just return NULL
  if (headPtr_ == NULL) {
    returnShapePtr = NULL;
  }

  // If there is only one node in the list, remove it.
  else if (headPtr_ == tailPtr_) {
    returnShapePtr = headPtr_->GetShape();
    size_--;
    delete headPtr_;
    headPtr_ = NULL;
    tailPtr_ = NULL;
  }

  // Otherwise, remove the first node in the list
  else {
    returnShapePtr = headPtr_->GetShape();
    size_--;
    ShapeNode *temp = headPtr_;
    headPtr_ = headPtr_->GetNextNode();
    delete temp;
  }

  return returnShapePtr; //return the current Node
}


bool ShapeQueue::IsEmpty() {
  return (headPtr_ == NULL);
}


int ShapeQueue::Size() {
  return size_;
}


void ShapeQueue::PrintAllShapes() {
	ShapeNode* temp_ = headPtr_;

  while (temp_ != NULL){
	  temp_->GetShape()->Print();
    temp_ = temp_->GetNextNode();
  }
}


void ShapeQueue::Clear() {
  ShapeNode* current = headPtr_;
  while (current != NULL) {
    ShapeNode* temp = current;
    Shape *shape = current->GetShape();
    current = current->GetNextNode();
    delete temp;
    delete shape;
  }
  
  size_ = 0;
  headPtr_ = NULL;
  tailPtr_ = NULL;
}
