//--------------------Encapsulation in C++ -------------------------//

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Student
{
    private:
        int marks;

    public:
        string fname;
        string lname;

        int get_marks()  // encapsulation getter
        {
            return marks;
        }

        void set_marks(int x) // encapsulation setter
        {
            marks = x;
        }

    Student(string fname, string lname)  // constructor
    {
        this->fname = fname;
        this->lname = lname;
    }
};

int main()
{
    Student st1{"Harry", "Potter"};
    st1.set_marks(450);

    cout << st1.fname << '\t' << st1.lname << endl;
    cout << st1.get_marks() << endl;
}


