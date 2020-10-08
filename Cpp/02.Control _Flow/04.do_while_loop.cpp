// ------------------------- A do while loop ------------------------------//


#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string pwd = "batman";
    string pass;


    do
    {

        cout << "Enter the password please: ";
        cin >> pass;

    }while(pwd != pass);

    cout << "Please Login" << endl;
}
