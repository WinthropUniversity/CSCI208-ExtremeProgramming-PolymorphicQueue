#include<Node.h>
#include<iostream>


Node::Node(Shape *ShapePtr){
  this->NextPtr = NULL;
  Shape = ShapePtr;

}

void SetNext(Node *InPtr){
  NextPtr = InPtr;
}

Node::GetNext(){
  return this->NextPtr;
}

Shape::GetShape(){
  return this->Shape;
}
