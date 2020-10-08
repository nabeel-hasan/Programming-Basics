// ---------------------------- 13. Strings ------------------------------ //

/*
 * using getline to get entire string input
 */


#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;



int main(){

    string first = " This is a";
    string second = "Mess";
    string third = first + second;
    cout << third << endl;
    cout << third.length() << endl;

    string input;
    cout << "Enter a string " << endl;
    getline(cin ,input);
    cout << " The output is " << input << endl;
}

































