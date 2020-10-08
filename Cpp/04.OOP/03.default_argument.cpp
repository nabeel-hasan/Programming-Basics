//------------------------ Default argument -------------------------//

#include <iostream>

using std::cout;
using std::endl;

int POW(int b, int p = 2) // default argument p = 2
{
    int total = 1;
    for(int i=0; i < p; i++)
    {
        total *= b;
    }
    return total;
}

int main()
{
    cout << POW(2,3) << endl;
    cout << POW(2) << endl;
    return 0;
}

