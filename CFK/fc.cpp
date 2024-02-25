// Fahrenheit to Celsium
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
   SetConsoleOutputCP(1251);
   cout << "Enter temperature in Fahrenheit: ";
   double fahrenheit_temperature = 0; // Fahrenheit temperature -0-
   cin >> fahrenheit_temperature;
   double celsius_temperature = (fahrenheit_temperature - 32) * 5 / 9;
   cout << "\n The temperature in Celsius is: " << celsius_temperature << endl;
}