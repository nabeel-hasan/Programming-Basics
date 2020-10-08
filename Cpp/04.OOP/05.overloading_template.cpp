//------------------------- Overloading templatize function--------------------//

/*
 * Template functions help us to avoid variable type inside a function
 * overloading can be done in templatizes functions
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


template <typename T>
void swap(T a[], T b[], int size)
{
    for(int i=0; i < size; i++)
    {  
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main()
{
    int a = 10, b = 20;
    int c[] = {0,0,0,0,0};
    int d[] = {1,1,1,1,1};

    swap(a, b);
    swap(c, d, 5);

    for(int i=0; i < 5; i++)
    {
        cout << c[i] << '\t' ;
    }
    cout << endl;

    for(int i=0; i < 5; i++)
    {
        cout << d[i] << '\t' ;
    }
    cout << endl;
}

