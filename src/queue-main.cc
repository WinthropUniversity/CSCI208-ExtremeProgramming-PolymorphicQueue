#include<iostream>
#include<vector>

#include<ShapeQueue.h>
#include<Shape.h>

using namespace std;

/**
     * Get Shape info
     * Store Shapes in queue
     * Print all shape info
     * menu/user - Driven
  **/
int main(int argc, char **argv) {
  
  /* First get shape(s) info - Should I decalre random dimensions for the shapes or is this user inputed data? 
     Would it perhaps be better to call an instance of ShapeQueue and store each individual shape (myCircle, etc.) into that queue? */
  
  ShapeQueue Queue;         //Create a ShapeQueue, and populate it
  
  //Circle myCircle(0.0);                      //Parameters -- Radius?
  //SemiCircle mySemiCircle(0.0);            //Parameters -- 
  Queue.InsertShape(myCircle);
  Queue.InsertShape(mySemiCircle);
  
  //Triangle myTriangle(0.0, 0.0);                  //Parameters -- Base & Height?
  //EqualateralTriangle myEqTriangle(0.0, 0.0);   //Parameters -- 
  Queue.InsertShape(myTriangle*);
  Queue.InsertShape(myEqTriangle*);
  
  //Rectangle myRectangle(0.0, 0.0);                  //Parameters -- Length & Width? 
  //Square mySquare(0.0, 0.0);                      //Parameters -- 
  Queue.InsertShape(myRectangle*);
  Queue.InsertShape(mySquare*);
  
  /* Print all the shape info */
  cout<<Queue.PrintAllShapes();
  
  // --------------------------------------------------------------------------------------------------------------  //
  /* Create a generic vector of shapes and insert each shape into the queue via loop?  */
  Vector<Shape*> ShapeList; 
  
  ShapeList.push_back(new Circle(0.0));
  ShapeList.push_back(new SemiCircle(0.0));
  ShapeList.push_back(new Triangle(0.0, 0.0));
  ShapeList.push_back(new EqualateralTriangle(0.0, 0.0));
  ShapeList.push_back(new Rectangle(0.0, 0.0));                  
  ShapeList.push_back(new Square(0.0, 0.0));
  
  /* Store declared shape(s) in Queue.  Question -- is this operation possible? */
  for (int idx=0; idxSshapeList.size(); idx++)
    ShapeList.InsertShape(idx);  
  
  /* Print all the shape info */
  
  
  // --------------------------------------------------------------------------------------------------------------  //
  // Everything is okay
  return 0;
}
