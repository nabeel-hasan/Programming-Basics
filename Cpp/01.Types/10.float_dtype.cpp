// ------------------------------ 10. Float data type precision------------------//

/*
 * Different float types can give different percision values therefore they must be
 * very carefully choosen in order to find the right value
 */

#include <iostream>
#include <float.h> // used to find the percision of float dtype

using std::cout;
using std::endl;
using std::fixed;   // give output in decimal rather in exp form

int main()
{
    float a = 1.0/3;
    double b = 1.0/3;
    long double c = 1.0/3;

    a = a*1000000000000000000;
    b = b*1000000000000000000;
    c = c*1000000000000000000;

    cout << " For Float : " << fixed << a << endl;
    cout << " For Double : " << fixed << b << endl;
    cout << " For LDouble : " << fixed << c << endl;

    cout << "The number of significant digits in float" << FLT_DIG << endl;
    cout << "The number of significant digits in double" << DBL_DIG << endl;
    cout << "The number of significant digits in Ldouble" << LDBL_DIG << endl;

}
