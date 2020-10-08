//------------ Using If statements with logical operators---------------//


/*
 * 1. logical operators && || 
 * 2. comparison != , ==, <=, >=, <>
 * 3. if , if-else, if-else-if
 */


#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (x%2 == 0) {
        cout << x << " is a multiple of two" << endl;
    }
    else if (x%3 == 0){
        cout << x << " is a multiple of three" << endl;
    }
    else{
        cout << x << " is not a multiple of 2 and 3" << endl;
    }
}
