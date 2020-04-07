#pragma once

#include <iostream>

class Shape
{
  public:
    int mainColor = 0;
    int linesColor = 0;
    void Draw () 
    {
      std::cout << "this is shape" << std::endl;
    }
};
