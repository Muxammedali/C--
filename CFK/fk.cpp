// Fahrenheit to Kelvin
/*
    ( °F - 32) * 5/9 + 273,15
    */
#include <iostream>
#include <windows.h>
using namespace std;
int main()

{
   SetConsoleOutputCP(1251);
   cout << "Enter Fahrenheit(F) to convert to Kelvin(К): ";
   long double fahrenheit_temperature;
   cin >> fahrenheit_temperature;
   cout << "Conversion from Fahrenheit(F) to Kelvin(K) is: " << (fahrenheit_temperature - 32) * 5 / 9 + 273.15 << endl;
}
