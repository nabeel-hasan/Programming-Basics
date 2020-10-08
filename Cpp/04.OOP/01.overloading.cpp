//------------------------------Overloading------------------------------//

/* The concept of overloading involves creating multiple functions of
 * same name but different arugemnts so once a function is called it
 * understand in terms of arguments passed
 */

#include <iostream>

using std::endl;
using std::cout;

int area(int a)
{
    int ar;
    ar = a * a;
    return ar;
}

int area(int a, int b)
{
    int ar;
    ar = a * b;
    return ar;
}

int area(float r)
{
    int ar;
    ar = 2 * 3.14 * r;
    return ar;
}

int main()
{
    int r = 10.0, a = 20, b = 30;

    cout << area(r) << endl;
    cout << area(a,b) << endl;
    cout << area(a) << endl;
}

