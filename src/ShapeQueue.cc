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
  if  ( headPtr_ == NULL) && (tailPtr_ == NULL) ) {
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


Shape *ShapeQueue::GetShape() {
  // Sky?
  // Get the shape in the head node`
  // Change the head to point to its next node`
  // If there was only one node to begin with, also update tail node ptr
  // Decrement the size_
  // What do we do when the list is empty???
  // Deallocate the ShapeNode
  if (headPtr_->GetNextNode() == NULL)
  {
     tailPtr_ = headPtr_;
     return headPtr_;
  }
  ShapeNode* curNode = headPtr_;//get the current headNode
  headPtr_ = (tailPtr_ = headPtr_->GetNextNode()); //set the headPtr to the next node in the list
  /*delete headPtr_;*/ //delete the current Node??
  size_--;
  return curNode; //return the current Node
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
	ShapeNode* temp_ = headPtr_;
  // Loop:
	//for( int i = 0; i < size_; i++) {
  while (temp_ != NULL){
	temp_->GetShape()->Print();
  //   Call the shape's Print() method

  //   Update pointer variable to the next ShapeNode
        temp_ = temp_->GetNextNode();
  //   Do this until we hit the end
  }
}


void ShapeQueue::Clear() {
  // Tyler?
  // Loop through the list,
  // as long as it isn't empty, get the front node
  //  We have a method for that:  GetShape()
  ShapeNode* current = headPtr_;
  while (current != NULL) {
    ShapeNode* temp = current;
    current = current->GetNextNode();
    delete temp;

  }
  size_ = 0;
  headPtr_ = NULL;
  tailPtr_ = NULL;
}
