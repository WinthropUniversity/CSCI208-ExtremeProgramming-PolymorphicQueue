#include<iostream>
#include<vector>

#include<ShapeQueue.h>
#include<Shape.h>

using namespace std;

int main(int argc, char **argv) {
  // --------------------------------------------------------------------------------------------------------------  //
  /* First get shape(s) info - do you I decalre random dimensions for the shapes or is this user inputed data?   */
  Circle myCircle(0.0);                      //Parameters -- Radius?
  //SemiCircle mySemiCircle(0.0);            //Parameters -- 
  
  Triangle myTriangle(0.0, 0.0);                  //Parameters -- Base & Height?
  //EqualateralTriangle myEqTriangle(0.0, 0.0);   //Parameters -- 
  
  Rectangle myRectangle(0.0, 0.0);        //Parameters -- Length & Width? 
  Square mySquare();                      //Parameters -- 
  
  // --------------------------------------------------------------------------------------------------------------  //
  /* Create a generic vector of shapes and insert each shape into the queue? */
  Vector<Shape*> ShapeList; 
  
  ShapeList.push_back(new Circle(0.0));
  ShapeList.push_back(new SemiCircle(0.0));
  ShapeList.push_back(new Triangle(0.0, 0.0));
  ShapeList.push_back(new EqualateralTriangle(0.0, 0.0));
  ShapeList.push_back(new Rectangle(0.0, 0.0));                  
  ShapeList.push_back(new Square(0.0, 0.0));
  
  // --------------------------------------------------------------------------------------------------------------  //
  /* Store declared shape(s) in Queue.  Question -- is this operation possible? */
  for (int idx=0; idx<shapelist.size(); idx++)
    ShapeList.InsertShape(idx);  
  
  /* Print all the shape info */
  
  
  // Everything is okay
  return 0;
}
