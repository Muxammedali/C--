/* Function Overloading */
#include <iostream>
#include <windows.h>
using namespace std;

int sum(int a, int b, int c)
{
   return a + b + c;
}

int sum(int a, int b)
{
   return a + b;
}

double sum(double a, double b)
{
   return a + b;
}

int main()
{
   SetConsoleOutputCP(1251);
   cout << sum(5, 6) << endl;
   cout << sum(0.5, 1.5) << endl;
   cout << sum(2, 1, 3) << endl;
}
