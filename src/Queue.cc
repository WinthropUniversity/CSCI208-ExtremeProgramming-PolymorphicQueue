#include <Queue.h>
#include <Node.h>

Queue::Queue(){
  // set the head and tail to NULL
  head = NULL;
  tail = NULL;


}

bool Queue::IsEmpty(){

  bool empty;
  // if the head is NULL, set empty to true
  if(head == NULL){
    empty = true;
  }
  // otherwise, set it to false
  else{
    empty = false;
  }

  // return the bool
  return empty;
}

void Queue::InsertToBack(Shape* data){

  Node* new_node = new Node(data);

  if(head==NULL){
    head = new_node;
  }

  if(tail != NULL){
    tail->SetNext(new_node);
  }

  tail = new_node;
}

Queue::RemoveFromFront(){

  if(head==NULL)
  {
    return NULL;
  }

  if(Node *head == )

  Node* temp = head;
  head = head->NextPtr();

  delete temp;
  return head;

}
