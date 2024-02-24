/*
We need to add code to read the space.
*/
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
   string login,
       password1,
       password2;
   cout << "Enter your login: " << login;
   getline(cin, login);
   cout << "\nEnter your password: ";
   getline(cin, password1);
   cout << "\nEnter your password again: ";
   getline(cin, password2);
   if (password1 == password2)
   {
      cout << endl
           << endl;
      cout << "  Welcome back: " << login;
      cout << endl
           << endl
           << endl; // to move the value away from the table (Process returned 0...)
   }
   else
   {
      system("cls");
      cout << "\nError!, passwords are not equal. Please try again." << endl;
      cout << "\n\n\n";
   }
}
