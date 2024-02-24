#include <iostream>
#include <locale.h>
#include <cctype>
using namespace std;
// You can write only numbers.
int main()
{
    float num;
    cout << "Vvedite:" << endl;
    for (;;)                            //бесконечный цикл
    {
        if (cin >> num)
            break;                      //выход из ближайшего цикла
        cout << "Ne pravilno" << endl;
        cin.clear();                    //снятие флага ошибки ввода cin
        while (cin.get() != '\n');      //очистка символов из потока ввода
    }
    return 0;
}
