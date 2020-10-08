//------------------------------- IO System in C++ ---------------------------//

#include <iostream>
#include <fstream>    // file input output
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::ofstream;  //output stream
using std::endl;


int main()
{
    int N;
    string name;
    vector<string> Lst;

    cout << "Enter the List size: ";
    cin >> N;

    cout << "Enter the Names: " << endl;

    for(int i = 0; i < N + 1 ; i++)
    {
        getline(cin, name);
        Lst.push_back(name);
    }

    ofstream file ("list.txt");

    for(string name : Lst)
    {
        file << name << endl;
    }

    file.close();
}





