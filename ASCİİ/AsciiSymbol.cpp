/*Write a program that
will print the drawing using characters from the ASCII table
*/
#include <iostream>
using namespace std;
int main()
{
    int chislo = 0;
    cout << "Enter a number from the ASCII table: ";
    cin >> chislo;
    cout << endl;
    cout << (char)(chislo);
    cout << endl;
}
