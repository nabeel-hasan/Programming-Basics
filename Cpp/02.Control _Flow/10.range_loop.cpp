//------------------ Using range loop ------------------------------//


#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


int main()
{
    vector<int> data = {0, 1, 2, 3, 4};

    for(int n : data)    // declaring range loop`
    {
        cout << n << '\t';
    }

    cout << endl;
}

/* Range loop work with arrays, vector and templetized loops
 */

