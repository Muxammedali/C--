/*1 function for sorting numbers using the sort() function*/
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> Sort(vector<int> v)
{
   sort(begin(v), end(v));
   return v;
}

int main()
{
   vector<int> nums = {3, 6, 1, 2, 0, 2};
   nums = Sort(nums);
   for (auto x : nums)
   {
      cout << x << " ";
   }
}