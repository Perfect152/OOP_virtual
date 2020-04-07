#pragma once

#include <iostream>

//виртуальный базовый класс
class Shape
{
  protected:
    int mainColor = 0;
    int linesColor = 0;
    virtual void Draw () = 0; //чистая виртуальная функция
};

//в современном C++, а также в C#, Java и других ООП-языках такие классы называют "Интерфейс"
//такие классы часто используются для реализации плагинов
