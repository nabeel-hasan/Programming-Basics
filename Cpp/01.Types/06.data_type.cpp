//----------------------------- 6. Integer Data Type------------------------//

#include <iostream>
#include <climits>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    short a;
    int b;
    long c;
    long long d;

    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    cout << "Size of short is : " << sizeof(short) << endl;
    cout << "Size of int is : " << sizeof(int) << endl;
    cout << "Size of long is : " << sizeof(long) << endl;
    cout << "Size of long long is : " << sizeof(long long) << endl;

    cout << "Maximum Limit of digits in short: " << SHRT_MAX << endl;
    cout << "Minimum Limit of digits in int: " << INT_MIN << endl;
    cout << "Unsigned Maximum Limit of digits in long: " << ULONG_MAX << endl;
    cout << "Maximum Limit of digits in long long: " << LLONG_MAX << endl;
}
