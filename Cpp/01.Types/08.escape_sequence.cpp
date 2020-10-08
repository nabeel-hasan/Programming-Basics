// ----------------------------- 8. Escape Sequence ---------------------- //

/*
 * 1. \t tab space
 * 2. \b delete character
 * 3. \n nextline
 * 4. \v vertical indent
 * 5. \0 null terminating character
 * 6. "\"" double quote
 * 7. \\ double backslash
 */


#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "There\t is a Man" << endl; 
    cout << "There\b is a Man" << endl;
    cout << "There\n is a Man" << endl;
    cout << "There\v is a Man" << endl;
    cout << " \"Look\" There is a Man" << endl;
    cout << "There\\ is a Man" << endl;
}




























