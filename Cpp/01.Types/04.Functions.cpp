// ------------------------ 4.Functions--------------------------------//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


float Circle(float radius) // initialisation 
{
    float result;
    result  = 3.141 * radius * radius;
    return result;
}


int main()
{
    float radius, area;
    cout << "Enter the radius : ";
    cin >> radius;
    area = Circle(radius);
    cout << "The area of Circle is : " << area << endl;

}
