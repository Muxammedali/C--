/*infinitely changing numbers*/
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
   for (int i = 0; i < 10; i--)
   {
      Sleep(1);
      if (i % 2 == 0)
      {
         cout << "12345";
      }
      else
      {
         cout << "67890";
      }
   }
}
