// Kelvin to celsium

/*
        Formula:
             K - 273,15 =  C  */

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
   SetConsoleOutputCP(1251);
   cout << "Enter Kelvin(K) to convert to Degrees Celsius(С): ";
   double kelvin_temperature;
   const float value = 273.15;
   cin >> kelvin_temperature;
   cout << "\nConversion from Kelvin(K) to Degree Celsius(C) is: " << (kelvin_temperature - value) << endl;
}
