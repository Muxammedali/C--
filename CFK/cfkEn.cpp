/* Temperature Calculator.*/

/* Start approximately October 18 , 2020   at [07:19]
    Finished all program logic October 20 ,  2020  at [07-50]
    Debugged and finished officially (completely)
        October 21 , 2020  at [08:06]
                        */
/*
    CFK
    CF + (from Celsius to Fahrenheit.)
    CK + (Celsius to Kelvin.)
    FC  + (Fahrenheit to Celsius.)
    FK  + (Fahrenheit to Kelvin.)
    KC  + (Kelvin to Celsius.)
    KF  + (Kelvin to Fahrenheit.)
    */
#include <iostream>
#include <conio.h> // in the end for word (try again later)
#include <windows.h>
using namespace std;

void celsium_temperature_to_fahrenheit(double celsium_temperature)
{
   cout << "\n\aFahrenheit temperature(F): " << (((celsium_temperature * 9) / 5) + 32) << endl;
}

void celsium_temperature_to_Kelvin(double celsium_temperature)
{
   const float justnumberforKelvin = 273.15;
   cout << "\n\aThe conversion from Celsius (C) to Kelvin (K) is: " << celsium_temperature + justnumberforKelvin << endl;
}

void fahrenheittemperatureToCelsium(double fahrenheit_temperature)
{
   double celsius_temperature = (fahrenheit_temperature - 32) * 5 / 9;
   cout << "\n \aThe Celsius temperature is: " << celsius_temperature << endl;
}

void fahrenheittemperatureToKelvin(double fahrenheit_temperature)
{
   cout << "\n\aConversion from Fahrenheit(F) to Kelvin(K) is: " << (fahrenheit_temperature - 32) * 5 / 9 + 273.15 << endl;
}

void kelvinToCelsium(double kelvin_temperature)
{
   const float value = 273.15;
   cout << "\n\aThe conversion from Kelvin (K) to Celsius (C) is: " << (kelvin_temperature - value) << endl;
}

void kelvinToFahrenheit(double kelvin_temperature)
{
   const float value = 273.15;
   cout << "\n\aThe conversion from Kelvin (K) to Fahrenheit (F) is: " << (((kelvin_temperature - value) * 9 / 5) + 32) << endl;
}

void exchange() // This is the function that does the main actions (we call it in main)
{
   cout << "\n---> ";
   int chose;
   cin >> chose;
   switch (chose)
   {
   case 1: // Each case has its own functions depending on the selected action by the user.
   {
      cout << "\nEnter the degree of Celsius(C): ";
      double celsium_temperature;
      cin >> celsium_temperature;
      celsium_temperature_to_fahrenheit(celsium_temperature);
      break;
   }

   case 2:
   {
      cout << "\nEnter the degree of Celsius(C): ";
      double celsium_temperature;
      const float justnumberforKelvin = 273.15;
      cin >> celsium_temperature;
      celsium_temperature_to_Kelvin(celsium_temperature);
      break;
   }

   case 3:
   {
      cout << "\nEnter the temperature in Fahrenheit: ";
      double fahrenheit_temperature = 0; // Fahrenheit temperature -0-
      cin >> fahrenheit_temperature;
      fahrenheittemperatureToCelsium(fahrenheit_temperature);
      break;
   }

   case 4:
   {
      cout << "\nEnter Fahrenheit (F) to convert to Kelvin (K): ";
      double fahrenheit_temperature;
      cin >> fahrenheit_temperature;
      fahrenheittemperatureToKelvin(fahrenheit_temperature);
      break;
   }

   case 5:
   {
      cout << "\nEnter Kelvin (K) to convert to Celsius (C): ";
      double kelvin_temperature;
      cin >> kelvin_temperature;
      kelvinToCelsium(kelvin_temperature);
      break;
   }

   case 6:
   {
      cout << "\nEnter Kelvin (K) to convert to Fahrenheit (F): ";
      double kelvin_temperature;
      cin >> kelvin_temperature;
      kelvinToFahrenheit(kelvin_temperature);
      break;
   }
   default:
   {
      cout << "\nYou may have chosen a non-valid expression." << endl;
   } // end of the  default
   } // end of the switch.
} // end of the function Exchange

int main()
{
   SetConsoleOutputCP(1251);
   cout << "\nEnter what actions you want to perform: " << endl
        << "____________________________________________" << endl
        << "\n1-Conversion from Celsius (C) to Fahrenheit (F)  " << endl
        << "\n2-Conversion from Celsius (C) to Kelvin (K) " << endl
        << "\n3-Conversion from Fahrenheit (F) to Celsius (C) " << endl
        << "\n4-Conversion from Fahrenheit (F) to Kelvin (K) " << endl
        << "\n5-Conversion from Kelvin (K) to Celsius (C) " << endl
        << "\n6-Conversion from Kelvin (K) to Fahrenheit (F) " << endl; // \a

   /*The program will be executed a maximum of 17 times.
   if the user will constantly choose (y). */
   exchange(); // Here's the first time execution.

   for (int i = 0; i <= 5; i++)
   {
      cout << "\n\nDo you wana continue(y/n): ";
      char yes_or_no;
      cin >> yes_or_no;
      if (yes_or_no == 'y')
      {
         exchange(); // and here already from 0-15 (i.e. 16 times) if the user constantly selects (y)
      }
      else if (yes_or_no == 'Y') // If caps lock is on
      {
         exchange();
      }
      else if (yes_or_no == 'n') // Only IF the user enters (n) we will exit otherwise it will be executed before the loop condition.
      {
         return 0;
      }
      else if (yes_or_no == 'N') // If caps lock is on
      {
         return 0;
      }
   } // end of the  for
   system("color 4");
   cout << "\nTry again later..." << endl;
} // end of the main
// The project was created by the Paper Programmer in October 2020.
