/*(WITH INPUT OPERATOR) PART 2 The function swaps the values of numbers with each other*/
#include <iostream>
#include <windows.h>
using namespace std;
int cart1,
    cart2;

void Exchange(int *firstNumber, int *secondNumber)
{
   int tempary = *firstNumber;
   *firstNumber = *secondNumber;
   *secondNumber = tempary;
}

int main()
{
   system("cls");
   cout << "Enter de first number: ";
   for (;;)
   {
      if (cin >> cart1)
      {
         break;
      }
      else
      {
         cout << "\n\aError! enter only numbers!\n"
              << endl;
         cin.clear();
         while (cin.get() != '\n')
            ; // Хрен знает для чего это.
      }
   }

   system("cls");
   cout << "\nEnter de second number: ";
   for (;;)
   {
      if (cin >> cart2)
      {
         break;
      }
      else
      {
         cout << "\n\aError! Enter only numbers!\n"
              << endl;
         cin.clear();
         while (cin.get() != '\n')
            ; // Хрен знает для чего это.
      }
   }
   system("cls");
   cout << "\nDe first number before Exchange is: " << cart1 << endl
        << "\nDe second number before Exchange is: " << cart2 << endl;
   Exchange(&cart1, &cart2);
   cout << "\n-------------------------------------------------------------" << endl;
   cout << "\nDe first number after Exchange is: " << cart1 << endl
        << "\nDe second number after Exchange is: " << cart2 << endl;
}
