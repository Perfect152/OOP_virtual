#include <iostream>

class Shape
{
  protected:
    int mainColor = 0;
    int linesColor = 0;
    virtual void Draw () = 0;
};
