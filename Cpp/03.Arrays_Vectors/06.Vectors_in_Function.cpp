//------------------- using vectors inside of function --------------------------//


#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;


void print_vec(vector<int> vec)
{
    cout << "Size of Vector : " << vec.size() << endl;
    cout << "Elements of vector are: " <<endl;

    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << '\t';
    }
}

int main()
{
    int size, num;
    vector<int> d1;

    cout << "Enter the size of vector: ";
    cin >> size;

    cout << "Enter the elements of Vector: " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> num;
        d1.push_back(num);
    }

    vector<int> d2 = d1;  // copying is possible in vectors
    print_vec(d2);
    
    cout << endl;
}
