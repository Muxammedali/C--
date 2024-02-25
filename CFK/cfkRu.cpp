/* Калькулятор Температур.*/
/* Начало приблизительно 18 октября 2020г в [07:19]
    Закончил всю логику программы 20 октября 2020г в [07-50]
    Отладил и закончил официально(полностью) 21 октября 2020г в 	[08:06]
                        */
/*
    CFK
    CF + (из градусов Цельсия в Фаренгейты.)
    CK + (из градусов Цельсия в Кельвин.)
    FC  + (из Фаренгейта в градус Цельсия.)
    FK  + (из Фаренгейта в Кельвин.)
    KC  + (из Кельвин в градус Цельсия.)
    KF  + (из Кельвин в Фаренгейты.)
    */

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void celsium_temperature_to_fahrenheit(double celsium_temperature)
{
   cout << "\n\aТемпература по Фаренгейту(F): " << (((celsium_temperature * 9) / 5) + 32) << endl;
}

void celsium_temperature_to_Kelvin(double celsium_temperature)
{
   const float justnumberforKelvin = 273.15;
   cout << "\n\aПеревод из Градусов цельсия (C) в Кельвин (К) составляет: " << celsium_temperature + justnumberforKelvin << endl;
}

void fahrenheittemperatureToCelsium(double fahrenheit_temperature)
{
   double celsius_temperature = (fahrenheit_temperature - 32) * 5 / 9;
   cout << "\n \aТемпература по цельсию равна: " << celsius_temperature << endl;
}

void fahrenheittemperatureToKelvin(double fahrenheit_temperature)
{
   cout << "\n\aПеревод из Фаренгейтов(F) в Кельвин(К) составляет: " << (fahrenheit_temperature - 32) * 5 / 9 + 273.15 << endl;
}

void kelvinToCelsium(double kelvin_temperature)
{
   const float value = 273.15;
   cout << "\n\aПеревод из Кельвин(К) в Градус цельсия(С) составляет: " << (kelvin_temperature - value) << endl;
}

void kelvinToFahrenheit(double kelvin_temperature)
{
   const float value = 273.15;
   cout << "\n\aПеревод из Кельвин(К) в Фаренгейт(F) составляет: " << (((kelvin_temperature - value) * 9 / 5) + 32) << endl;
}

void exchange() // Эта функция которая делает основные действия (мы её вызываем в main)
{
   cout << "\n---> ";
   int chose;
   cin >> chose;

   switch (chose)
   {
   case 1: // В каждом кейсе есть свои функции в зависимости от выбранного действия пользователем.
   {
      cout << "\nВведите градус цельсия(C): ";
      double celsium_temperature;
      cin >> celsium_temperature;
      celsium_temperature_to_fahrenheit(celsium_temperature);
      break;
   }

   case 2:
   {
      cout << "\nВведите градус цельсия(C): ";
      double celsium_temperature;
      const float justnumberforKelvin = 273.15;
      cin >> celsium_temperature;
      celsium_temperature_to_Kelvin(celsium_temperature);
      break;
   }

   case 3:
   {
      cout << "\nВведите температуру по Фаренгейту: ";
      double fahrenheit_temperature = 0; // Температура по фаренгейту -0-
      cin >> fahrenheit_temperature;
      fahrenheittemperatureToCelsium(fahrenheit_temperature);
      break;
   }

   case 4:
   {
      cout << "\nВведите Фаренгейты(F) для перевода в Кельвин(К): ";
      double fahrenheit_temperature;
      cin >> fahrenheit_temperature;
      fahrenheittemperatureToKelvin(fahrenheit_temperature);
      break;
   }

   case 5:
   {
      cout << "\nВведите Кельвин(К) для перевода в Градус цельсия(С): ";
      double kelvin_temperature;
      cin >> kelvin_temperature;
      kelvinToCelsium(kelvin_temperature);
      break;
   }

   case 6:
   {
      cout << "\nВведите Кельвин(К) для перевода в Фаренгейт(F): ";
      double kelvin_temperature;
      cin >> kelvin_temperature;
      kelvinToFahrenheit(kelvin_temperature);
      break;
   }

   default:
   {
      cout << "\nВозможно вы выбрали не действующее выражение." << endl;
   } // end of the  default
   } // end of the switch.
} // end of the function Exchange

int main()
{
   SetConsoleOutputCP(1251);
   cout << "\nВведите какие действия вы хотите произвести: " << endl
        << "____________________________________________" << endl
        << "\n1-Перевод из градусов цельсия(C) в Фаренгейт (F)  " << endl
        << "\n2-Перевод из градусов цельсия(C) в Кельвин (K) " << endl
        << "\n3-Перевод из Фаренгейт (F) в Цельсий (C) " << endl
        << "\n4-Перевод из Фаренгейт (F) в Кельвин (K) " << endl
        << "\n5-Перевод из Кельвин (K) в Цельсий (C) " << endl
        << "\n6-Перевод из Кельвин (K) в Фаренгейт (F) " << endl; // \a

   /*Программа выполнится максимум 17 раз
   если пользователь будет постоянно выбирать (y). */
   exchange(); // Здесь выполнение 1 раз.

   for (int i = 0; i <= 2; i++)
   {
      cout << "\n\nDo you wana continue(y/n): ";
      char yes_or_no;
      cin >> yes_or_no;
      if (yes_or_no == 'y')
      {
         exchange(); // а здесь уже от 0-15 (тоесть 16 раз) если пользователь постоянно будет выбирать (y)
      }
      else if (yes_or_no == 'Y') // Если включён капс-лок
      {
         exchange();
      }
      else if (yes_or_no == 'n') // Только ЕСЛИ пользователь введёт (n) мы выйдем иначе будет выполнятся до условия цикла.
      {
         return 0;
      }
      else if (yes_or_no == 'N') // Если включён капс-лок
      {
         return 0;
      }
   } // end of the  for
   system("cls");
   system("color 4");
   cout << "\a\n\n\n\t\t\t\t\t\tПопробуйте позже..." << endl;
} // end of the main
// Проект создан Бумажным программистом в  октября 2020 года.
