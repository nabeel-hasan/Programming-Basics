//-------------------- defining funtions --------------------------//

#include <iostream>
#include <vector>
#include "math_opr.h"  // connects to header file

using std::cout;
using std::vector;
using std::endl;

namespace mathopr
{

    void PRINT(vector<int> vec)
    {
        for(int i=0; i < vec.size(); i++)
        {
            cout << vec[i] << '\t';
        }
        cout << endl;
    }

    int AREA(int a, int b)
    {
        int area = a * b;
        return area;
    }

}


