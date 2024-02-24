/*2 More abbreviated and using references*/
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Sort(vector<int> &v)
{
   sort(begin(v), end(v));
}

int main()
{
   vector<int> nums = {3, 6, 1, 2, 0, 2};
   Sort(nums);
   for (auto x : nums)
   {
      cout << x << " ";
   }
   return 0;
}