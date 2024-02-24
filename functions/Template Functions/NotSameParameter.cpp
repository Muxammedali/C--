/* Template function With Not the same parameters. */
#include <iostream>
using namespace std;
template <typename T1, typename T2>
T1 Sum(T1 a, T2 b)
{
   return a + b;
}
int main()
{
   /* The compiler stopped swearing at what we have in the transmitted
   function values have different values -_- , that is, different data types
   are transmitted. In our case it is int , double

   Although we use template parameters, he knows what these
   the parameters are different from each other. That is, they will be of different types.
   But in principle, we can substitute parameters of the same type there,
   because they are templates, but in this case we can use
   they are different, that is, we can easily transmit a fractional number
   and an integer. But, only our function will still return
   as a result, type , as our first number. It will simply translate
   this is the value return a + b; to the first type T1, tobizh in our
   cases this is an int value, i.e. 5.*/

   /*Well, here of course... it depends on what you want
   will be necessary. That is, the implementation can be rewritten differently.

   Here I had a goal, only,
     so that your function can accept different types
     template parameters.*/
   cout << Sum(5, 0.5) << endl;
}
