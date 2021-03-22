#ifndef TRIANGLE_
#define TRIANGLE_

#include<iostream>
#include<Shape.h>

using namespace std;

class Triangle : public Shape
{
   private:
      double base;
      double height;

   public:
      Triangle();
      double GetBase();
      double GetHeight();
}

