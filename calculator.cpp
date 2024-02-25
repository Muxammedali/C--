// 20.11.2021
#include <iostream>
#include <windows.h>
using namespace std;
///             Preliminary announcements. (prototypes)
void choiceOfActions();
int forLoading();
void endingProgramm();
void hello();
// void music();
double sum();
double subtraction(); // Subtraction.
double multiplication();
double divide();
double average();

void fail_or_good()
{
   /// HERE I WANTED TO PUT A CHECK WITH IFAS
   /// That is, processing incorrect user input.
}

double sum(double firstNumber, double secondNumber)
{
   cout << "\nDe sum is: " << firstNumber + secondNumber << endl;
   return 0;
}

double subtraction(double firstNumber, double secondNumber)
{
   cout << "\nThe subtraction is: " << firstNumber - secondNumber << endl;
   return 0;
}

double multiplication(double firstNumber, double secondNumber)
{
   cout << "\nThe multiplication is: " << firstNumber * secondNumber << endl;
   return 0;
}

double divide(double firstNumber, double secondNumber)
{
   if (secondNumber != 0)
   {
      cout << "\nThe divide is: " << static_cast<double>(firstNumber / secondNumber) << endl;
   }

   else
   {
      cout << endl
           << "------------------------------"
           << endl
           << "|X|\a ERROR , Divide to zero!!!|"
           << endl
           << "------------------------------" << endl;
   }
   return 0;
}

double average(double firstNumber, double secondNumber)
{
   cout << "\nThe average is: " << static_cast<double>((firstNumber + secondNumber) / 2) << endl;
   return 0;
}

double exchange()
{
   cout << "---> ";
   int chose;
   cin >> chose;
   if (std::cin.fail()) // if the previous extraction was unsuccessful,
   {
      std::cin.clear();             // then return cin to 'normal' operating mode
      std::cin.ignore(32767, '\n'); // and remove the values of the previous input from the input buffer
      std::cout << "\nOops, that input is invalid.  Please try again.\n";
   }
   else
   {
      std::cin.ignore(32767, '\n'); // remove unnecessary values
      // return secondNumber;
      // return chose2;
   }

   switch (chose)
   {
   case 1:
   {
      cout << endl
           << "-------------------------------"
           << endl
           << "|1| You chose adding numbers.|"
           << endl
           << "-------------------------------";

      cout << "\n\nEnter first number: ";
      double firstNumber;
      cin >> firstNumber;
      cout << "\nEnter second number: ";
      double secondNumber;
      cin >> secondNumber;
      if (std::cin.fail()) // if the previous extraction was unsuccessful,
      {
         std::cin.clear();             // then return cin to 'normal' operating mode
         std::cin.ignore(32767, '\n'); // and remove the values of the previous input from the input buffer
         std::cout << "Oops, that input is invalid.  Please try again.\n";
      }
      else
      {
         std::cin.ignore(32767, '\n'); // remove unnecessary values
         sum(firstNumber, secondNumber);
      }
      break;
   } // end of the case 1

   case 2:
   {
      cout << endl
           << "--------------------------------"
           << endl
           << "|2| You chose to subtract numbers.|"
           << endl
           << "--------------------------------";

      cout << "\n\nEnter first number: ";
      double firstNumber;
      cin >> firstNumber;
      cout << "\nEnter second number: ";
      double secondNumber;
      cin >> secondNumber;
      if (std::cin.fail()) // if the previous extraction was unsuccessful,
      {
         std::cin.clear();             // then return cin to 'normal' operating mode
         std::cin.ignore(32767, '\n'); // and remove the values of the previous input from the input buffer
         std::cout << "Oops, that input is invalid.  Please try again.\n";
      }
      else
      {
         std::cin.ignore(32767, '\n'); // remove unnecessary values
         subtraction(firstNumber, secondNumber);
      }
      break;
   } // end of the case 2

   case 3:
   {
      cout << endl
           << "--------------------------------"
           << endl
           << "|3| You chose multiplication of numbers.|"
           << endl
           << "--------------------------------";

      cout << "\n\nEnter first number: ";
      double firstNumber;
      cin >> firstNumber;
      cout << "\nEnter second number: ";
      double secondNumber;
      cin >> secondNumber;
      if (std::cin.fail()) // if the previous extraction was unsuccessful,
      {
         std::cin.clear();             // then return cin to 'normal' operating mode
         std::cin.ignore(32767, '\n'); // and remove the values of the previous input from the input buffer
         std::cout << "Oops, that input is invalid.  Please try again.\n";
      }
      else
      {
         std::cin.ignore(32767, '\n'); // remove unnecessary values
         multiplication(firstNumber, secondNumber);
      }
      break;
   } // end of the case 3

   case 4:
   {
      cout << endl
           << "------------------------------"
           << endl
           << "|4| You have chosen to divide numbers.|"
           << endl
           << "------------------------------";
      cout << "\n\nEnter first number: ";
      double firstNumber;
      cin >> firstNumber;
      cout << "\nEnter second number: ";
      double secondNumber;
      cin >> secondNumber;
      if (std::cin.fail()) // if the previous extraction was unsuccessful,
      {
         std::cin.clear();             // then return cin to 'normal' operating mode
         std::cin.ignore(32767, '\n'); // and remove the values of the previous input from the input buffer
         std::cout << "Oops, that input is invalid.  Please try again.\n";
      }
      else
      {
         std::cin.ignore(32767, '\n'); // remove unnecessary values
         divide(firstNumber, secondNumber);
      }
      break;
   } // end of the case 4

   case 5:
   {
      cout << endl
           << "---------------------------------------------"
           << endl
           << "|5| You have chosen the arithmetic mean of numbers.|"
           << endl
           << "---------------------------------------------";
      cout << "\n\nEnter first number: ";
      double firstNumber;
      cin >> firstNumber;
      cout << "\nEnter second number: ";
      double secondNumber;
      cin >> secondNumber;
      if (std::cin.fail()) // if the previous extraction was unsuccessful,
      {
         std::cin.clear();             // then return cin to 'normal' operating mode
         std::cin.ignore(32767, '\n'); // and remove the values of the previous input from the input buffer
         std::cout << "Oops, that input is invalid.  Please try again.\n";
      }
      else
      {
         std::cin.ignore(32767, '\n'); // remove unnecessary values
         average(firstNumber, secondNumber);
      }
      break;
   } // end of the case 5
   } // end of the switch
   return 0;
} // end of the function exchange

int main()
{

   SetConsoleOutputCP(1251);
   // hello();
   //  music();

   choiceOfActions(); // Calling action selection (for visualization in the console)
   exchange();        /* FIRST function call. Next, if everything is in it
                          If it happens successfully, then we will go to the cycle below. */
   /* The for loop below performs five iterations (not inclusive since there is no equal to ) and thus
        in fact, the maximum iterations will be seven(7). because there is another check below
            if(i>2) which means that if the user makes a mistake twice, then
                    clearing the console and because of this the number of our iterations increases by +2
                        that is, 5 + 2 = 7.
                        P.s: in fact, for example, if we do it in the loop condition
                            i <=5 then the number of our iterations will be nine (9) -_-
                            So my theory may not be accurate.
                                Well, what difference does it make, the main thing is that it works :D
                               */
   for (int i = 0; i < 5; i++)
   {
      cout << "\nDo you wanna continue (y/n): ";
      char yes_or_no;
      cin >> yes_or_no;
      if (std::cin.fail()) // if the previous extraction was unsuccessful,
      {
         std::cin.clear();             // then return cin to 'normal' operating mode
         std::cin.ignore(32767, '\n'); // and remove the values of the previous input from the input buffer
         std::cout << "Oops, that input is invalid.  Please try again.\n";
      }
      else
      {
         std::cin.ignore(32767, '\n'); // remove unnecessary values
      }
      cout << endl;
      if (yes_or_no == 'n')
      {
         // exit(0);
         return 0;
      }
      if (yes_or_no == 'y' || 'Y')
      {
         // system("cls");
         // choiceOfActions ();
         exchange();
      }
      /* If the user makes a mistake
               twice at the beginning then console input
                 will clear and ask the user
                   'want to continue?' and all this
                       will continue until he comes out
                         from the program or while the condition is in
                            loop will be true*/
   } // end of the for
} // end of the main
///    Below are the functions that were previously
/// declared at the beginning.
/// Function for the loading effect.
int forLoading()
{
   for (int loading = 0; loading < 101; loading++)
   {
      cout << "Data is being processed, please wait for the download to complete.. " << endl;
      cout << "\nLoading..." << loading << "%" << endl;
      Sleep(33);
      system("cls");
   }
   return 0;
}

///  Welcome function.
void hello()
{
   cout << "\t\t\t\t-------------------------"
        << endl
        << "\t\t\t\t*"
        << "\t\t\t*"
        << endl
        << "\t\t\t\t*"
        << "\t\t\t*"
        << endl
        << "\t\t\t\t*"
        << "  Welcome."
        << "\t*"
        << endl
        << "\t\t\t\t*"
        << "\t\t\t*"
        << endl
        << "\t\t\t\t*"
        << "\t\t\t*"
        << endl
        << "\t\t\t\t-------------------------";

   cout << endl; // To separate the top rectangle with the caption from the bottom code.

   cout << "\t---------------------------------------------------------------------------"
        << endl
        << "\t|"
        << "Enter two numbers so that you can perform some actions on them."
        << "|"
        << endl
        << "\t---------------------------------------------------------------------------";

   Sleep(5000);
   system("cls");
}

/// Excerpt from Mario.
/// Sound is produced using a computer beeper.
// void music()
//{
//     Beep(659.26, 200);
//     Beep(659.26, 200);
//     Sleep(200);
//     Beep(659.26, 200);
//     Sleep(100);
//     Beep(523.26, 200);
//     Beep(659.26, 200);
//     Sleep(200);
//     Beep(783.98, 200);
//     Sleep(400);
//     Beep(391.99, 200);
//
// }

/// Function for selecting actions.
/// (more precisely, a visual representation to select an action.)

void choiceOfActions()
{
   cout << "Choose an action: \n"
        << "------------------\n"
        << endl
        << "--------------"
        << endl
        << "|1| Addition.|"
        << endl
        << "--------------"
        << endl
        << endl
        << "---------------"
        << endl
        << "|2| Subtraction.|"
        << endl
        << "---------------"
        << endl
        << endl
        << "---------------"
        << endl
        << "|3| Multiplication.|"
        << endl
        << "---------------"
        << endl
        << endl
        << "-------------"
        << endl
        << "|4| Division.|"
        << endl
        << "-------------"
        << endl
        << endl
        << "----------------------------"
        << endl
        << "|5| Average.|"
        << endl
        << "----------------------------";
   cout << endl
        << endl;
   cout << "Enter one of the following conditions ";
}

void endingProgramm()
{
   Sleep(10000);
   for (int index = 5; index >= 0; index--)
   {
      cout << "\nThe program will close in  " << index << "с\a" << endl;
      Sleep(1000);
      system("cls");
   }
   cout << "\a\a\a\a\a";
}

/// Created by Paper programmer at 2020 year
