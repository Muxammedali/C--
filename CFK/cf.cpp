// Celsium to Fahrenheit
/*
( °C * 9/5) + 32 =  °F
*/

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
   SetConsoleOutputCP(1251);
   cout << "Введите градус(C): ";
   double celsius_temperature;
   cin >> celsius_temperature;
   cout << "\nFahrenheit-Temperatur(F): " << (((celsius_temperature * 9) / 5) + 32) << endl;
}
