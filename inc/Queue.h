#ifndef QUEUE_H
#define QUEUE_H
#include <Node.h>
#include <Shape.h>

class Queue {
public:
    void InsertToBack(Shape* data);
    Shape* RemoveFromFront();
    bool IsEmpty();

    //constructor
    Queue();

protected:
    Node *head;
    Node *tail;

};


#endif
