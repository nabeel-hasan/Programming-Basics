//----------------------------- Inheritance in C++ --------------------------//

/* some attributes and methods can be inherited from one class to another
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


class Course                         // base class
{
    public:
        string ID;
        string Name;
        int weeks;
};


class Math : public Course        // derived class
{
    public:
        string subject = "Mathematics";
};


int main()
{
    Math Calculus;
    Calculus.ID = "M001";
    Calculus.Name = "Calculus for beginners";
    Calculus.weeks = 12;

    cout << Calculus.ID << endl;
    cout << Calculus.subject << endl;
}

