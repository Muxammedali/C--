#include <iostream>
using namespace std;
int main()
// False and true explanation.
{
   bool a = false, b = true;
   cout.setf(ios_base::boolalpha);
   cout << "a = " << a << endl;
   cout << "!a = " << (!a) << endl;
   cout << "b = " << b << endl;
   cout << "!b = " << (!b) << endl;
   b = false;
   cout << a << " || " << b << " = " << (a || b) << endl;
   b = true;
   cout << a << " || " << b << " = " << (a || b) << endl;
   a = true;
   b = false;
   cout << a << " || " << b << " = " << (a || b) << endl;
   b = true;
   cout << a << " || " << b << " = " << (a || b) << endl;
}
// https://github.com/Muxammedali