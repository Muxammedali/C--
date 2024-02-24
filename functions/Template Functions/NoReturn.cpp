/* A template function that does not return anything (void) and at the same time can output different data types*/
#include <iostream>
using namespace std;
template <typename T1, typename T2>
void Sum(T1 a, T2 b)
{
   cout << a << endl;
   cout << b << endl;
}
int main()
{

   Sum(5, 3.5);
   Sum("Hello world", 3);
}
