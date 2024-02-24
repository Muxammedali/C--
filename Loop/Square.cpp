/*squares of numbers in the specified range*/

#include <iostream>
using namespace std;
int main()
{
   int j;                   // definition of the loop counter.
   for (j = 0; j < 15; j++) // the counter changes from 0 to 14
   {
      cout << j * j << " "; // the square of the j value is displayed
   }
   cout << endl;
}