//----------------- defining functions------------------------//

#include "math_opr.h"  // connects to header file
#include <iostream>

using std::cout;
using std::endl;

namespace mathopr
{

    void SWAP(int &a, int &b)

    {
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }


    int POW(int base, int p)
    {
        int result = 1;
        for(int i=0; i < p; i++)
        {
            result *= base;
        }
        return  result;
    }

}


