#define NO_VIRTUAL 

#include <vector>

#ifdef NO_VIRTUAL
#include "figures_no_virtual.h"
#else
#include "figures_virtual.h"
#endif

std::vector <Shape*> shapes;

void CreateShapes (std::vector <Shape*>& s)
{
  for (int i = 0; i < 100; i ++)
  {
    int shapeType = rand () % 3;
    
    switch (shapeType)
    {
      case 0:
        s.push_back(new Triangle);
        break;
      case 1:
        s.push_back(new Quad);
        break;
      case 2:
        s.push_back(new Circle);
        break;
    }
  }
}

void PrintShapes (const std::vector <Shape*>& s)
{
  for (const auto& shape: s)
    s.Draw ();
}

int main ()
{
  srand (time(nullptr));
  
  CreateShapes (shapes);
  PrintShapes (shapes);
  
  return 0;
}
