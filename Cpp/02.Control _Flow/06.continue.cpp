// ------------------------------ Use of continue ------------------//

/*
 * continue help us to ignore the particular value without stooping the 
 * loop
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] == ' ')
        {
            continue;
        }

        cout << input[i] << endl;

    }


}


