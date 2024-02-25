#include <iostream>
#include <string>
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

class MyTest;
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

   // Перегрузка оператора равенства

   bool operator==(const Point &other)
   {
      return this->x == other.x && this->y == other.y;
   }

   // Перегрузка оператора не равно

   bool operator!=(const Point &other)
   {
      return !(this->x == other.x && this->y == other.y);
   }

   // Перегрузка оператора сложения

   Point operator+(const Point &other)
   {
      Point temp;
      temp.x = this->x + other.x;
      temp.y = this->y + other.y;
      return temp;
   }

   // Перегрузка префиксного инкремента. ++x;

   Point &operator++()
   {
      this->x++;
      // или this->x += 1;
      // илиже this->x = this->x + 1;
      this->y += 1;
      return *this;
   }

   // Перегрузка постфиксного инкремента x++;
   Point &operator++(int value)
   {
      // юзаем прямо с конструктором копирования
      Point temp(*this);
      // что верхнее означает ?
      // это означает , что, здесь в этом методе , мы создадим
      // ещё один точно такое же самый обьект , с точно такимиже самыми
      // полями , на момент вызова операции постфиксного инкремента.
      // собственно мы этотже объект будем возвращать return temp;
      //  а далее нам нужно с нащим обьектом провернуть теже самые
      // операции которые мы делали в префиксном инкремента.
      // ну , то есть увеличить его поля.
      this->x++;
      this->y++;
      return temp;
   }

   // Перегрузка префиксного декремента --x;
   Point &operator--()
   {
      this->x--;
      // или this->x += 1;
      // илиже this->x = this->x + 1;
      this->y -= 1;
      return *this;
   }

   // Перегрузка постфиксного декремента x++;
   Point &operator--(int value)
   {
      // юзаем прямо с конструктором копирования
      Point temp(*this);
      // что верхнее означает ?
      // это означает , что, здесь в этом методе , мы создадим
      // ещё один точно такое же самый обьект , с точно такимиже самыми
      // полями , на момент вызова операции постфиксного инкремента.
      // собственно мы этотже объект будем возвращать return temp;
      //  а далее нам нужно с нащим обьектом провернуть теже самые
      // операции которые мы делали в префиксном инкремента.
      // ну , то есть увеличить его поля.
      this->x--;
      this->y--;
      return temp;
   }
   /*   int setY(int valueY)
      {
          y = valueY;
      }*/
   int GetY()
   {
      return y;
   }

   int GetX()
   {
      return x;
   }

   /* int SetX(int valueX)
    {
        x = valueX;
    }*/

   void PrintInfo()
   {
      cout << "X = " << x << "\tY = " << y << endl;
   }
   friend void ChangeX(Point &value);
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
      /* вот выше при создании переменного и присвоения ему
      значения other.size  , ниже мы сразу выделяем данные под массив.*/
      this->data = new int[other.Size];
      for (int i = 0; i < other.Size; i++)
      {
         this->data[i] = other.data[i];
      }
      cout << "Вызвался конструктор копирования. " << this << endl;
   }

   // Перегрузка оператора присваивания.
   Myclass &operator=(const Myclass &other)
   {
      cout << "Вызвался оператор =  " << this << endl;
      this->Size = other.Size;
      /*выше при копирвоании мы должны изменить поле Size которая овтечает за массив
      так как поле Size не выделено в динамической памяти нам в нём
      ничего чистить не нужно , мы можем просто его присвоить.*/

      if (this->data != nullptr)
      {
         delete[] this->data;
      }
      this->data = new int[other.Size];
      /* ниже , эта часть относится к динамической памяти.
      Взяли(точнее скопировали) из кода выше , мы его вставили ниже
      после того , как память текушего обьекта (внутри if)
      мы почистим.*/
      for (int i = 0; i < other.Size; i++)
      {
         this->data[i] = other.data[i];
      }
      return *this;
   }

   ///   ДЕСТРУКТОР.
   ~Myclass()
   {
      cout << "Вызвался деструктор " << this << endl;
      delete[] data;
   }

private:
   int Size; // отличается от переменной size

}; // конец класса Myclass
class TestClass
{

public:
   int &operator[](int index)
   {
      return arr[index];
   }

private:
   int arr[5]{5, 44, 4, 987, 69};
};

class Mytest
{
private:
   int Data = 0;
   friend void ChangeX(Point &value, Mytest &test);
};

// дружественая функция
void ChangeX(Point &value, Mytest &test)
{
}

int main()
{
   setlocale(LC_ALL, "ru");
   Mytest b;
   Point a(5, 12);
   a.PrintInfo();
   ChangeX(a, b);
   a.PrintInfo();
}
