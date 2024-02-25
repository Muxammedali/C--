// Kelvin to Fahrenheit

/*
        Formula:
            ( K - 273,15) * 9/5 + 32 =  F
   */

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
   SetConsoleOutputCP(1251);
   cout << "Enter Kelvin(K) to convert to Fahrenheit(F): ";
   double kelvin_temperature;
   const float value = 273.15;
   cin >> kelvin_temperature;
   cout << "\nConversion from Kelvin(K) to Fahrenheit(F) is: " << (((kelvin_temperature - value) * 9 / 5) + 32) << endl;
}
