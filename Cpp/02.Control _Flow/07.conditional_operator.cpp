//------------------------ Using conditional operator---------------------//


#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    int number = 340;
    int guess;

    cout << "Enter a number: ";
    cin >> guess;

    int point = guess == number ? 100 : -100;

    // point = 100 if guess is equal to number
    // point = -100 if guess is not equal to number

    cout << point << endl;

}







