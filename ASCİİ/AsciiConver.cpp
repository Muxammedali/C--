/* A program that asks the user to enter (character) and then displays the number of the entered (character) by the user from the ASCII table
 */
#include <iostream>
int main()
{
    std::cout << "input a keyboard character: ";
    char character;
    std::cin >> character;
    std::cout << character << " has ASCII code " << static_cast<int>(character) << std::endl;
}
