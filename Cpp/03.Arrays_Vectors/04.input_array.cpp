//------------------- Input elements in array---------------------//


#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    const int size = 10;
    int array[size];

    cout << "Enter the values in array: " << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    for(int i = 0; i < 5; i++)
    {
        cout << "The value is: " << array[i] << endl;
    }

    cin.clear();
    cin.ignore(100, '\n');  // clears string values and other cache
}
