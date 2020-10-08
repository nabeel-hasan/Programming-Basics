//----------- Operator overloading using == and + ----------------------------//


#include <iostream>

using std::cout;
using std::endl;

class Complex
{
    public:

        int r;
        int i;

        Complex operator + (Complex obj)
        {
            Complex temp;
            temp.r = r + obj.r;
            temp.i = i + obj.i;
            return temp;
        }
        bool operator == (Complex obj)
        {
            if(r == obj.r && i == obj.i)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    Complex c1{21, 23};
    Complex c2{10, 10};

    Complex c3 = c1 + c2;
    cout << c3.r << ' ' << "i" << c3.i << endl;

    if(c1 == c1)
    {
        cout << "The complex number are equal\n";
    }
    else
    {
        cout << "Not equal\n";
    }
}



