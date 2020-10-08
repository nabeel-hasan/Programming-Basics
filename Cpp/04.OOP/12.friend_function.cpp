//--------------- Friend Function ---------------------//


/* 
 * friend function can access private info of class
 */


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
    private:
        int code;
    public:
        string fname;
        string lname;

        void set_code(int x)
        {
            code = x;
        }

        friend ostream& operator << (ostream& output, const Name name);    // friend function
};

ostream& operator << (ostream& output, Name name)    // exsertion
{
    output << "First Name: " << name.fname << endl;
    output << "Last Name: " << name.lname << endl;
    output << name.code << endl;
    return output;
}

istream& operator >> (istream &input, Name &name)    // insertion &name to fix input
{
    input >> name.fname >> name.lname;
    return input;
}

int main()
{
    Name N1;
    N1.fname = "Howard";
    N1.lname = "Wolowitz";
    N1.set_code(100);
    cout << N1 << endl;
}
