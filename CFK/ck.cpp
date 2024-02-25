// Celsium to kelvin

/* Formula:
     °C + 273,15 =  K
     */

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
   SetConsoleOutputCP(1251);
   cout << "Enter degrees Celsius(C): ";
   double celsius_temperature;
   const float justnumberforKelvin = 273.15;
   cin >> celsius_temperature;
   cout << "\nConversion from Degrees Celsius (C) to Kelvin (K) is: " << celsius_temperature + justnumberforKelvin << endl;
}
