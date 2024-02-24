#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void Print(const vector <int>& v  , const string  &title)
{
	cout << title << ": ";
	for (auto i : v)
	{
		cout << i << " ";
	}
}

int main()
{
	vector < int > v{ 1 , 3 , 5 ,2 , 4 };
	Print(v , "init");
	sort(begin(v), end(v));
	cout << endl;
	Print(v, "sort");
	return 0;
}