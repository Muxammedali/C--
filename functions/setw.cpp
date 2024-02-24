#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
int main()
{
   SetConsoleOutputCP(1251);
   int moscow = 47658,
       cart1 = 45,
       cart2 = 22234;
   cout << setw(8) << "Город" << setw(12) << "Население" << endl
        << setw(8) << "Moscow" << setw(12) << moscow << endl
        << setw(8) << "cart1" << setw(12) << cart1 << endl
        << setw(8) << "cart2" << setw(12) << cart2 << endl;
}