#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   /*We just include the algorithm library,
and pass the min or max parameters to the function
and display it on the screen.*/
   cout << max(5, 4) << endl;
   string a = "a";
   string b = "b";
   cout << max(a, b) << endl;
   char aa = 'a';
   char bb = 'b';
   cout << max(aa, bb) << endl;
}