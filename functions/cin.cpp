/* When calling another function, the program displays the # symbol
  as many times as the user enters.
*/

#include <iostream>
#include <windows.h>
using namespace std;
int n;

void foo(int n)
{
   cout << "Enter de n= ";
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cout << "\a"
           << "\n#" << endl;
   }
}

int main()
{
   foo(n);
}
