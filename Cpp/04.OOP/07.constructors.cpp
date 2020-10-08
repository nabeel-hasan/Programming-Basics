//---------------- Declaring constructors within a Class-----------------------//

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Student
{
    public:

        string fname;
        string lname;
        int year;

        Student(string fname, string lname, int year); //constructor declaration
};

class Course
{
    public:

        string sub1;
        string sub2;
        string sub3;

        Course(string x, string y, string z);

};
// constructor definition outside of class
Student::Student(string fname, string lname, int year)
{
    this->fname = fname;
    this->lname = lname;
    this->year = year;
}

Course::Course(string x, string y, string z)
{
    sub1 = x;
    sub2 = y;
    sub3 = z;
}


int main()
{
    Student st1{"Selena", "Kyle", 2004};
    Course Math{"LA", "Calculus", "Neural Network"};

    cout << st1.fname << '\t' << st1.lname << endl;
    cout << Math.sub2 << '\t' << Math.sub3 << endl;
    return 0;
}

