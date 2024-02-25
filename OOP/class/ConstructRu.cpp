/*Конструкторы + перегрузка конструкторов */

#include <iostream>
#include <string>
using namespace std;
class Human
{
private:
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

int main()
{
    Point a;
    a.PrintInfo();  // Вызывается конструктор по умолчанию
    Point b(5, 44); // Вызывается второй конструктор.
    b.PrintInfo();
}
