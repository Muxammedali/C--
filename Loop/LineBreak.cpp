// For example, we want to write a program that prints numbers from 1 to 100 with 20 values on each line. We can use the division operator with a remainder to create a line break. Even though we haven't looked at the while loop yet, the following program makes it as simple and clear as possible:

#include <iostream>
int main()
{
   // The count variable stores the current number to be output
   int count = 1; // start from 1
   // Repeat the operation (loop) until count is equal to 100
   while (count <= 100)
   {
      std::cout << count << " "; // output current number
      // If count is divisible by 20 without a remainder, then insert a line break and continue on a new line
      if (count % 20 == 0)
         std::cout << "\n";
      count++; /* move on to the next number, same thing
           as count = count + 1 or count = count + 1 */
   }           // end of while
   return 0;
} // end of main()
