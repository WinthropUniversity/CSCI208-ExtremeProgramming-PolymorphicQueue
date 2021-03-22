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
  
  ShapeList.push_back(new Circle
  ShapeList.push_back(new SemiCircle
  ShapeList.push_back(new Triangle
  ShapeList.push_back(new EqualateralTriangle
  ShapeList.push_back(new Rectangle                  
  ShapeList.push_back(new Square
  
  // --------------------------------------------------------------------------------------------------------------  //
  
  /* Store declared shape(s) in Queue */
  
  
  /* Print the Queue */
  
  
  // Everything is okay
  return 0;
}
