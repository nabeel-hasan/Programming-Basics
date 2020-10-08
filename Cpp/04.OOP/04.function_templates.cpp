//------------------------- Making templatize function--------------------//

/*
 * Template functions help us to avoid variable type inside a function in 
 * order to use multitye variable
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;

    cout << "a: " << a << '\t' << "b: " << b << endl;
}


int main()
{
    int a = 10, b = 20;
    char c = 'w', d = 'e';

    swap(a, b);
    swap(c, d);
}

