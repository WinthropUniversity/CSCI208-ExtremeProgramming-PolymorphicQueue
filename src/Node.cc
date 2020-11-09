#include<Node.h>
#include<iostream>


Node::Node(Shape *InPtr){
  this->NextPtr = NULL;
  this->ShapePtr = InPtr;

}

void Node::SetNext(Node *InPtr){
  this->NextPtr = InPtr;
}

Node *Node::GetNext(){
  return this->NextPtr;
}

Shape *Node::GetShape(){
  return this->ShapePtr;
}
