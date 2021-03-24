#include<SemiCircle.h>
//this is SemiCircle.cc

double SemiCircle::GetArea() const {
  return Circle::GetArea() / 2.0;
}
