//определение символа отвечающего за включение/выключение полиморфизма
//в данном случае символ включен (определен) и это ВЫКЛЮЧАЕТ полиморфизм
#define NO_VIRTUAL 
//для его выключения необходимо закомментировать строку выше
//и это ВКЛЮЧИТ полиморфизм
//либо выключить символ специальной директивой
//расскомментировав строку ниже
//#undef NO_VIRTUAL

// http://www.cplusplus.com/reference/vector/vector/
//аналог "бесконечного массива"
#include <vector>

#ifdef NO_VIRTUAL
#include "figures_no_virtual.h"
#else
#include "figures_virtual.h"
#endif

std::vector <Shape*> shapes;

//создаем случайным образом фигуры
//и записываем их указатели в вектор
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

//вызываем у каждой фигуры метод Draw ()
//результат зависит от включения-выключения полимофизма
void PrintShapes (const std::vector <Shape*>& s)
{
  for (const auto& shape: s)
    shape->Draw ();
}

int main ()
{
  srand (time(nullptr));
  
  CreateShapes (shapes);
  PrintShapes (shapes);
  
  std::cin.get();
  return 0;
}
