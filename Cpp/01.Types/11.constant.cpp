// ------------------------- 11'. Constant and ENUM -------------------------//\

/* const is used to freeze the value to a fixed number so it cannot be modified again
 * same for enum
 */

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    const int a = 100;
    a = 23;

    enum {y = 123}
    y  = 65;

}

// The program is going to give error because we try to modify a constant
