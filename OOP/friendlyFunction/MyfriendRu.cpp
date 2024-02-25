// Тут я изобразил пример дружественной функции
#include <iostream>
using namespace std;
class Myclass
{
private:
   int value = 0;

public:
   // Конструкторы.
   // Конструктор по умолчанию:
   Myclass()
   {
   }

   // Конструктор с параметром.
   Myclass(int value)
   {
      this->value = value;
   }

   // Вывод информации:
   void Printinfo()
   {
      cout << "Value= " << value << endl;
   }
   friend void ChangeValue(Myclass &value);
};

// Создаём дружественную функцию:
void ChangeValue(Myclass &variable)
{
   variable.value = 10;
}

int main()
{
   Myclass a(5);
   a.Printinfo();
   // выше мы установили к нашему обьекту a
   // значение пять , теперь мы вызываем нашу
   // дружественную функцию , и меняем значение
   // нашего обьекта a
   ChangeValue(a);
   a.Printinfo(); // соответственно выводим информацию на экран.
}