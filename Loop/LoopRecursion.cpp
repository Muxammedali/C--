// Recursion
#include <iostream>
#include <windows.h>
using namespace std;
int Foo(int a)
{
	if (a < 1)
	{
		return 0;
	}
	a--;
	cout << a << endl;
	return Foo(a);
}
int main()
{
	Foo(10);
}
