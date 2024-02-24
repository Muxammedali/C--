#include <iostream>
using namespace std;
int x , y;

	int getNumber ()
	{
	int x = 0;
	cin>>x;
	return x;
	}


	void printResult ()
	{
	cout<<"smaller number: "<<x<<endl;
	cout<<"larger number: "<<y<<endl;
	}

	int main ()
	{
	cout<<"Enter de first number: ";
	x = getNumber();
	cout<<"Enter de second number but highter than first number: ";
	y = getNumber();
	if( y < x)
	{
	int z = x;
	x = y;
	y = z;
	printResult();
	}
	else
	{
	printResult();
	}
	return 0;
	}