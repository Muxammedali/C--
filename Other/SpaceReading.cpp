#include <iostream>
#include <string>
using namespace std;
//console space reading. 
int main()
{
    string name;
    cout << "Enter you name: ";
    getline(cin, name);
    cout << "\nYour name is: " << name << endl;
}  