#pragma once

#include "shape_no_virtual.h"

class Triangle: public Shape
{
//наследуется все от Shape
  private:
    int lineLength = 10;
    void Draw ()
    {
      cout << "This is triangle" << endl;
    }
};
