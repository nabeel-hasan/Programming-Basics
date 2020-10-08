//---------------------- Making a for loop ------------------------------------//


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    
    unsigned long long x, num;

    cout << "This is a program to calculate factorial" << endl;
    cout << "Enter a number: " ;
    cin >> num;

    x = num;
    for(unsigned long long i = x - 1; i > 0; i--)
    {
        x = x * i;
    }

    cout << " The factorial of " << num << " is: " << x << endl; 
}
