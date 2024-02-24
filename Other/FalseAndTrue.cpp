#include <iostream>
using namespace std;
//How false and true works explanation. 
int main()
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
	a = true; b = false;
	cout << a << " || " << b << " = " << (a || b) << endl;
	b = true;
	cout << a << " || " << b << " = " << (a || b) << endl;
}