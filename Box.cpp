#include "Box.h"

// Implement setters and getters
    void Box::setlength(int l)
{
  l=length;
}
    void Box::setwidth(int w)
{
  w=width;
}
    void Box::setheight(int h)
{
  h=height;
}
    int Box::getlength()
{
  return length;
}
    int Box::getwidth()
{
  return width;
}
    int Box::height()
{
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {

  return height *width *length ;
  
}
