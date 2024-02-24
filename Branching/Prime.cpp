
// Using an if loop to determine prime numbers.
#include <iostream>
#include <windows.h>
#include <process.h> //For exit()
using namespace std;
int main()
{
   SetConsoleOutputCP(1251);
   unsigned long n, j;
   cout << "Enter the number: ";
   cin >> n; // Entering the number to be checked

   for (j = 2; j <= n / 2; j++) // Division by integers

      if (n % j == 0) // Starting from 2; if the remainder

      { // zero, then the number is not prime.

         cout << "The number is not prime, it is divisible by: " << j << endl;
         exit(0); // Exit the program.
      }

   cout << "the number is prime.\n";
   return 0;
}
