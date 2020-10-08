//------------------------- Pass By Reference----------------------------------//

#include <iostream>

using std::cout;
using std::endl;

void swap_by_ref(int &a, int &b)  // Pass by reference 
{
    int temp;
    temp = a;
    a = b;
    b = a;
    cout << "a: " << a << "b: " << b << endl;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = a;
    cout << "a: " << a << "b: " << b << endl;
}

int main()
{
    int a = 10;
    int b = 20;

    cout << "a: " << a << "b: " << b << endl;
    swap(a,b);
    cout << "a: " << a << "b: " << b << endl;
    swap_by_ref(a,b);  // changes permanently
    cout << "a: " << a << "b: " << b << endl;

}
