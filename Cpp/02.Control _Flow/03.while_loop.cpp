//---------------------------------- Making a while loop ------------------------//



#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main()
{
    int x, i;

    cout << " Plz Enter between : ";
    cin >> x;

    i = x;
    while(i > 0)
    {
        cout << i << "\t" ;
        i--;
    }

    cout << endl;

}
