//--------------- Insertion and Exsertion operator ---------------------//


/* building custom cin cout funtion*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;


class Name
{
    public:
        string fname;
        string lname;
};

ostream& operator << (ostream &output, Name name)    // exsertion
{
    output << "First Name: " << name.fname << endl;
    output << "Last Name: " << name.lname << endl;
    return output;
}

istream& operator >> (istream &input, Name &name)    // insertion &name to fix input
{
    input >> name.fname >> name.lname;
    return input;
}

int main()
{
    Name N1{"Martha", "Stewart"};
    cout << N1 << endl;

    Name N2;
    cin >> N2;
    cout << N2;
}
