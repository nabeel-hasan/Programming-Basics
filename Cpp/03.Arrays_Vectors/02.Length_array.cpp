//----------------- Finding length of array------------------//
//


#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int arr2[10] = {10, 20, 30, 40, 50};

    int size_array = sizeof(arr2) / sizeof(arr2[0]);
    cout << size_array << endl;

    // modifying values in array
    for(int i = 0; i < size_array; i++)
    {
        arr2[i] = i* arr2[i];
    }

    for(int i = 0; i < size_array; i++)
    {
        cout << arr2[i] << "\t";
    }

    cout << endl;

}
