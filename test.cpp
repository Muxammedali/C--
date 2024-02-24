#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Day
{
	int value;
	explicit	Day(int new_value) //конструктор
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


struct  Date
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

void PrintDate(const Date& date)
{
	cout << date.day << "." << date.month << "." << date.year << endl;

}

/*теперь после того как мы добавили ключивое слово explicit
к нашим конструкторам , мы явно сказали что бы конструктор ничего 
не преобразовывал , тем самым теперь ранее мы допустим 
могли вызвать его в мэйне даже так
Date date = { {15} , {04} , {2021} };
но теперь после explicit мы так не можем вызывать
и нам явно нужно указывать что есть что. 
тобиж:
	Date date = { Day{15} , Month{04} , Year {2021} };
	p.s: можно и в круглых скобках указывать значения
	*/

int main()
{

	Date date = { Day{15} , Month{04} , Year {2021} };
	/*если выше сменить между собой допустим
	день(Day) с месяцем (Month) то код не скомпилируется,
	ну, это потому-что по коду он ожидает сперва день,потом месяц
	потом год а мы ему втираем что первым будет месяц.
	И естественно он в таких условиях не скомпилируется.*/
	PrintDate(date);
	return 0;
}  