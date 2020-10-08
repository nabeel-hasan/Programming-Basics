//----------------- Creating Structs---------------------------//

// struct are useful in storing data

#include <iostream>

using std::cout;
using std::endl;

struct Rectangle
{
    int length;
    int width;
};  // semi colon after struct ends

int area(float a, float b)
{
    int ar;
    ar = a * b;
    return ar;
}



int main()
{
    Rectangle size;
    size.length = 10;
    size.width = 20;
    cout << area(size.length, size.width) << endl;
    return 0;
}
