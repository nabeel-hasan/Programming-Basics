//--------------------------- Arrays --------------------------------------//


#include <iostream>

using std::cout;
using std::endl;


int main()
{
    int arr1[] = {23, 98, 67, 42, 31, 35};

    cout << sizeof(arr1) << endl;

    for(int i = 0; i < 6; i++)
    {
        cout << arr1[i] << "\t";

    }

    cout << endl;
}
