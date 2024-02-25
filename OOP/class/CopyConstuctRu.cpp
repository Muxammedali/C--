#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Human
{
public:
   string name;
   int age;
   int weight;

   void printforfun()
   {
      cout << "De name is: " << name << endl
           << "De age is: " << age << endl
           << "De weight is: " << weight << endl;
   }
};

class Point
{
private:
   int x;
   int y;

public:
   ///    КОНСТРУКТОРЫ.
   Point() /*Конструктор по умолчанию.*/
   {
      x = 0;
      y = 0;
   }

   Point(int valueX, int valueY)
   {
      x = valueX;
      y = valueY;
   }

   int setY(int valueY)
   {
      y = valueY;
   }

   int GetY()
   {
      return y;
   }

   int GetX()
   {
      return x;
   }

   int SetX(int valueX)
   {
      x = valueX;
   }

   void PrintInfo()
   {
      cout << "X = " << x << "\tY = " << y << endl;
   }
};

class Myclass
{
public:
   int *data;

   ///         КОНСТРУКТОР

   Myclass(int size)
   {
      /*Ниже код this->Size = size; нужен нам для
      того, чтобы мы помнили какого размера у нас
      массив вообше существует.Потому что
      вот здесь в конструкторе копирвоание в коде
      this->data = other.data; мы просто не сможем
      получить эти данные без той переменной.  */
      this->Size = size;
      this->data = new int[size];
      for (int i = 0; i < size; i++)
      {
         data[i] = i;
      }
      cout << "Вызвался конструктор " << this << endl;
   }

   ///     КОНСТРУКТОР КОПИРОВАНИЯ.
   Myclass(const Myclass &other)
   {
      /* ниже логика конструктора по умолчанию. */
      // this ->data = other.data;
      /*Ниже означает , что в новом обьекте в место
      того ,что бы просто тупо скопировать указатель,
      точнее ссылку в тот указатель на который у нас уже
      есть , мы создаём новый обьект размером с такой
      же количеством ячеек массива который мы создали в
      первом обьекте  ну вот здесь в
      this->Size = size; и
      this->data = new int[size]; */
      this->Size = other.Size;
      this->data = new int[other.Size];
      for (int i = 0; i < other.Size; i++)
      {
         this->data[i] = other.data[i];
      }
      cout << "Вызвался конструктор копирования. " << this << endl;
   }

   ///   ДЕСТРУКТОР.
   ~Myclass()
   {
      cout << "Вызвался деструктор " << this << endl;
      delete[] data;
   }

private:
   int Size; // отличается от переменной size
};           // конец класса Myclass

void Foo(Myclass value)
{
   cout << "Вызвалась функция FOO " << endl;
}

Myclass Foo2()
{
   cout << "Вызвалась функция FOO_2 " << endl;
   Myclass temp(2);
   return temp;
}

int main()
{
   SetConsoleOutputCP(1251);
   Myclass a(10);
   Myclass b(a);
   // Foo(a);
   return 0;
}
