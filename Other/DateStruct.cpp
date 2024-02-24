#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Day
{
   int value;
   explicit Day(int new_value) // constructor
   {
      value = new_value;
   }
};
struct Month
{
   int value;
   explicit Month(int new_value)
   {
      value = new_value;
   }
};
struct Year
{
   int value;
   explicit Year(int new_value)
   {
      value = new_value;
   }
};
struct Date
{
   int day;
   int month;
   int year;
   Date(Day new_day, Month new_month, Year new_year)
   {
      day = new_day.value;
      month = new_month.value;
      year = new_year.value;
   }
};
void PrintDate(const Date &date)
{
   cout << date.day << "." << date.month << "." << date.year << endl;
}
/*now after we added the explicit keyword
to our constructors, we explicitly said that the constructor would be nothing
did not transform, thus now we will allow earlier
could call it in main even like this
Date date = { {15} , {04} , {2021} };
but now after explicit we can’t call like that
and we clearly need to indicate which is which.
tobizh:
Date date = { Day{15} , Month{04} , Year {2021} };
p.s: you can also indicate values in parentheses
   */
int main()
{
   Date date = {Day{15}, Month{04}, Year{2021}};
   /*if above change between each other it is permissible
day (Day) with month (Month) then the code will not compile,
well, this is because according to the code it waits first for a day, then for a month
then a year and we tell him that the first month will be a month.
And naturally it will not compile under such conditions.*/
   PrintDate(date);
   return 0;
}