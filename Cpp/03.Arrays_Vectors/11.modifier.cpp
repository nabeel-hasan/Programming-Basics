//------------------------- Modifiers /Constant ----------------------------//

#include <iostream>

using std::endl;
using std::cout;

/*
 * This function modifies value
 */

void arr_mod(int arr[], int l)
{
    for(int i=0; i < l; i++)
    {
        arr[i] = arr[i]*2;
        cout << arr[i] << '\t';
    }
    cout << endl;
}

/*
 * This function do not modifies value
 */


void arr_const(const int arr[], int l)  // This will show error
{
    for(int i=0; i < l; i++)
    {
        arr[i] = arr[i]*2;
        cout << arr[i] << '\t';
    }
    cout << endl;
}


int main()
{
    int arr[] = {1,2,3,4};

    arr_const(arr, 4);
    arr_mod(arr, 4);
    return 0;

}







