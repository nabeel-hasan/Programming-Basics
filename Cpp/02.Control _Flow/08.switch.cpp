// --------------------------- 08.Switch-----------------------------//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    int number;

    do
    {
        cout << "1.Want to quit! " << endl;
        cout << "2.Want to Play! " << endl;
        cout << "Enter Your choice: ";
        cin >> number;

        switch(number)
        {
            case 1:
                cout << "See You Again!" << endl;
                return 0;
                cout << " Let\'s play!" << endl;
                break;
        }
    }
    while(number != 0);
}
