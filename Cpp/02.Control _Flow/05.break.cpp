// -------------------- Using break----------------------//

/*
 * break is used to exit the loop once the condition is met
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string sen;

    cout << "Enter a sentence: ";
    getline(cin, sen);

    for(int i = 0; i < sen.length(); i++)
    {
        cout << sen[i] << endl;

        if(sen[i] == 't')
        {
            cout << "There is t in sentence" << endl;
            cout << "loop ends here" << endl;
            break;
        }

    }

    cout << "End of Program" << endl; 
}
