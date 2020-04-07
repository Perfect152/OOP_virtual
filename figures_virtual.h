#pragma once

#include "shape_no_virtual.h"

class Triangle: public Shape
{
//наследуется все от Shape
  private:
    int lineLength = 10;
    void Draw () override
    {
      cout << "This is triangle" << endl;
    }
};

class Quad: public Shape
{
//наследуется все от Shape
  private:
    int lineLength = 10;
    void Draw () override
    {
      cout << "This is quad" << endl;
    }
};

class Circle: public Shape
{
//наследуется все от Shape
  private:
    int radius = 10;
    void Draw () override
    {
      cout << "This is cirlce" << endl;
    }
};
