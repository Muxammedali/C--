#include <iostream>
#include <map>
#include <string>
using namespace std;
map<char, int> BuildCharCounters(const string &word)
{
   map<char, int> counters;
   for (char c : word)
   {
      ++counters[c];
   }
   return counters;
}

int main()
{
   int n;
   cin >> n;
   for (int i = 0; i < n; ++i)
   {
      string firstword, secondword;
      cin >> firstword >> secondword;
      if (BuildCharCounters(firstword) == BuildCharCounters(secondword))
      {
         cout << "YES";
      }
      else
      {
         cout << "NO";
      }
   }
   return 0;
}