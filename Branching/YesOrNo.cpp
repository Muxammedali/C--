#include <iostream>
#include <windows.h>
#include <ctime> //Library for running a unique number generator.
using namespace std;
int main()
{
   int a;
   srand(time(NULL)); // Created a function for running a random number generator.
   // cout<<"1- random number =  " << 1 + rand () % 2 <<endl;
   a = 1 + rand() % 2; // ДRange value from 1 to 2
   cout << a << endl;
   if (a == 1) // Further branches (you can see everything in the code)
   {
      system("cls");
      cout << "yes" << endl;
   }
   else
   {
      system("cls");
      cout << "no" << endl;
   }
}
