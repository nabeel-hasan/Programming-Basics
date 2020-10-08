//-------------------- Using arrays inside a Function-------------------//


/*
 * Arrays cannot be put inside a function it converts them to pointers
 * use the size of array perimeter to make arrays work inside a function
 */

#include <iostream>

using std::cout;
using std::endl;

void print_array(int array[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << array[i] << "\t";
    }
}


int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size  = sizeof(arr) / sizeof(int);
    
    cout << size << endl;
    print_array(arr, size);
    cout << endl;
}
