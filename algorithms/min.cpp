#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
/*Просто подключаем библиотку algorithm , 
и передаём в функцию min или max  параметры 
и выводим на экран.*/
	cout << min(5, 4) << endl;
	string a = "a";
	string b = "b";
	cout << min(a, b) << endl;
	char aa = 'a';
	char bb = 'b';
	cout << min(aa, bb) << endl;
}