//----------------------- Polymorphism--------------------------//

/* polymorphism allowed the use of method and attributes from a class can be used
 * or modified into different derived classes 
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


class Person
{
    public:
        string ID;
        string FacultyID;
        void status()
        {
            cout << "Not a Teacher or Student" << endl;
        }
};


class Teacher : public Person
{
    public:
        void status()                // polymorphism
        {
            cout << "Teacher" << endl;
        }
};


class Student : public Person
{
    public:
        void status()             //polymorphism
        {
            cout << "Student" << endl;
        }
};


int main()
{
    Person P1;
    Teacher T1;
    Student S1;

    T1.ID = "T089";
    T1.FacultyID = "FT089";

    S1.ID = "S021";
    S1.FacultyID = "FS021";

    cout << T1.FacultyID << endl;
    T1.status();

    cout << S1.FacultyID << endl;
    S1.status();

    P1.status();
}
