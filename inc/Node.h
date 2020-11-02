#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <string>
#include <Shape.h>
using namespace std;

class Node{
private:
	Node *NextPtr;
	Shape *Shape;
public:
	Node *GetNext();
	Shape *GetShape();

	Node(Shape *ShapePtr);

	void SetNext(Node *InPtr);

	
};
#endif
