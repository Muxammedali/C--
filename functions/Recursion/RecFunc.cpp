
/*Write a recursive function that takes an integer as input
and returns the sum of all the numbers in that value (for example, 482 = 4 + 8 + 2 = 14).
Test your program using the number 83569 (the result should be 31). */
// Solution
#include <iostream>
using namespace std;
int sumNumbers(int x)
{
   if (x < 10)
      return x;
   else
      return sumNumbers(x / 10) + x % 10;
}
int main()
{
   cout << sumNumbers(83569) << std::endl;
}