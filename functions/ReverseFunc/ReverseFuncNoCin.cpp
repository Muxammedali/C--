/*(WITHOUT INPUT OPERATOR) The function swaps the values of numbers with each other*/
#include <iostream>
#include <windows.h>
using namespace std;
void Exchange(int *firstNumber, int *secondNumber)
{
   int tempary = *firstNumber;
   *firstNumber = *secondNumber;
   *secondNumber = tempary;
}

int main()
{
   int cart1 = 10;
   int cart2 = 20;
   cout << "\nCart1 is: " << cart1 << endl;
   cout << "\nCart2 is: " << cart2 << endl;
   Exchange(&cart1, &cart2);
   cout << "\nExchange" << endl;
   cout << "\nCart1 is: " << cart1 << endl;
   cout << "\nCart2 is: " << cart2 << endl;
}
