//--------------------------- Templetized Arrays ---------------------------//

/*
 * 1, templetized arrays have some characters of vectors and some of arrays
 * it is static in size like arrays
 * it knows it size like vectors
 */

#include <iostream>
#include <array>         // declaring templetized arrays
#include <vector>

using std::array;
using std::cout;
using std::endl;

void print_tarray(array<int, 10> tarray)
{
    cout << "size: " << tarray.size() << endl;
    for(int i = 0; i < tarray.size(); i++)
    {
        cout << tarray[i] << '\t';
    }
}

int main()
{
    array<int, 10> data = {13, 78, 90, 87, 34};

    print_tarray(data);

    cout << endl;
}


/*
 * Difference between arrays, tarrays, vectors
 * Arrays 1. static 2. decay to pointer 3.must pass size 4. no copying
 * TArrays 1. static 2. pass by value 3. .size() 4. copying
 * Vectors 1. dynamic 2. pass by value 3. .size() 4.  copying
 */


