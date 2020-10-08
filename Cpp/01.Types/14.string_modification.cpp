//-------------------------- 14. String Modification ------------------------//

#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

int main(){

    string name = "iron";
    name += "man";
    cout << name << endl;
    name.append(" is Tony");
    cout << name << endl;
    name.insert(3, "  ");
    cout << name << endl;
    name.erase(3, 2);      // position, no. of characters to be deleted
    cout << name << endl;
    name.replace(0, 7, "IRONMAN");
    cout << name << endl;
    cout << name.find("ON") << endl;
    cout << name.substr(1, 4) << endl;

}









































