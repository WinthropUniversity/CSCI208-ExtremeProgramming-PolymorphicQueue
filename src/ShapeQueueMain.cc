#include<iostream>
#include<string>

#include<Circle.h>
#include<RightTriangle.h>
#include<Queue.h>

using namesace std;


Shape *AskUserForShape() {
  Shape *myShape = NULL;

  // Ask user which shape to make
  int whichShape = 0;
  cout << "What shape do you want? (1-Circle, 2-RightTriangle, 3-Rectangle) :"
  cin >> whichShape;

  // Create the correct shape
  if (whichShape == 1)
    myShape = new Circle();

  else if (whichShape == 2)
    myShape = new RightTriangle();

  else if (whichShape == 3)
      myShape = new Rectange();

  // Read the shape info from
  if (myshape != NULL)
    myShape->AskUserForShapeParameters();

  returm myShape;
}



int main() {
  Queue myshapequeue;
  bool done = False;

  while (!done) {
    Shape *shape = AskUserForShape();
    if (shape != NULL)
      myshapequeue.InsertToBack(shape);
    else
      cout << "ERROR:  I don't know what that shape is." << endl;

    string moreResponse;
    cout << "Are you done inserting shapes? (Y/N) "
    cin >> moreResponse;

    done = (moreResponse[0] == 'Y') || ((moreResponse[0] == 'y');
  } // End while not done

  cout << endl << endl;

  cout << "Here is your shape queue:" << endl;
  while (!myshapequeue.IsEmpty()) {
    Shape *shape = myshapequeue.RemoveFromFront();
    shape->PrintShapeInfo();
    delete shape;

    cout << endl;
  } // End of while not empty

  // Everything is okay.
  return 0;
}
