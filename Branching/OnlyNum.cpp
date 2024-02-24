/*Doesn't allow you to enter anything other than a number.*/
#include <iostream>
#include <locale.h>
#include <cctype>
#include <windows.h>
using namespace std;

int main()
{
   SetConsoleOutputCP(1251);
   float num;
   cout << "Enter numbers ONLY: ";
   for (;;) // endless loop
   {
      if (cin >> num)
      {
         break; // exit from the nearest loop
      }
      cout << "\nWrong. I say, enter the number that is not clear -б-" << endl;
      cin.clear(); // снятие флага ошибки ввода cin
      while (cin.get() != '\n')
         ; // очистка символов из потока ввода
   }
   return 0;
}
