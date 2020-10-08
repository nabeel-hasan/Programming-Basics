//----------------------------- Input from a File -------------------------//


#include <iostream>
#include <fstream>
#include <vector>


using std::cout;
using std::string;
using std::vector;
using std::endl;
using std::ifstream; // use to get input from a file


int main()
{
    string names;
    vector<string> lst;

    ifstream input ("list.txt");  // file is an input word we can use any other word
    getline(input, names);

    while(input >> names)
    {
        lst.push_back(names);
    }

    for(int i = 0; i < lst.size(); i++)
    {
        cout << lst[i] << endl;
    }
}

/* vectors store data as strings not whole lines */
