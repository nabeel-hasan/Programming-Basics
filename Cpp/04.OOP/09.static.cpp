//------------------------------- Static Data Member------------------------//

/* static data members describe an aggregate attribute of a class
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Employee
{
    private:
        static int members; // static data members cannot be assigned values inside class

    public:
        static int get_member()
        {
            return members;
        }
        string fname;
        string lname;
    
    Employee(string a, string b)
    {
        string fname = a;
        string lname = b;
        members++;
    }

    ~Employee()         //destructor
    {
        members--;
    }
};

int Employee::members = 0; //static data type assigned value outside the class

int main()
{
    Employee E1{"James", "Singer"};
    Employee E2{"Suzzane", "Stone"};
    Employee E3{"Charli", "Star" };

    cout << Employee::get_member() << endl;

    E1.~Employee();        // deleting record
    cout << Employee::get_member() << endl;
}



