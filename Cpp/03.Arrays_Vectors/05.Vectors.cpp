//----------------------------Declaring vectors ------------------------------//

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


int main()
{
    vector<int> data;
    
    data.push_back(14);   // adding element to vector
    data.push_back(10);
    data.push_back(18);

    cout << data[data.size() - 1] << endl;

    data.pop_back();

    cout << data.size() << endl;
}
