#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << "i is: " << i << endl;
        if (i > 2)
        {
            for (int j = 0; j <= 10; i++)
            {
                char chose;
                cout << "Do you want to continue? (y/n): ";
                cin >> chose;
                if (chose == 'y')
                {
                    cout << "\n\nNice, let's continue. ";
                }
                else if (chose == 'n')
                {
                    cout << "Bye. " << endl;
                    return 0;
                }
            }
        }
    }
}
