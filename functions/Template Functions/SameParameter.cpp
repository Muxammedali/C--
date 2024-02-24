/* Template function With the same parameters. */
#include <iostream>
using namespace std;

template <typename T>
T Sum(T a, T b)
{

   return a + b;
}

int main()
{
   /* in our example here int , in fact, any type is possible, but in our case they must be the same (the types must be the same (data type))*/
   cout << Sum(5, 10) << endl;
}