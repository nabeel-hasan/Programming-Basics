//-------------- Creating a header file---------------------------//

/* header file includes all the declaration for functions and stucts
 * ifndef -- is used to make sure if it is not compiled before
 * define -- to define the header file
 * endif -- to end header file
 */

#ifndef math_opr
#define math_opr

#include <iostream>
#include <vector>

using std::cout;
using std::vector;

struct dim
{
    int a;
    int b;
};

namespace mathopr
{

    void SWAP(int a, int b);

    int POW(int base, int p);

    void PRINT(vector<int> vec);

    int AREA(int a, int b);

}
#endif
