// ------------------------ 5.Void Functions--------------------------------//

// Void Functions donot return anything

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


void print_area(float radius)
{
    float area;
    area = Circle(radius);
    cout << "The area of Circle is : " << area << endl;
}


int main()
{
    float radius;
    cout << "Enter the radius : ";
    cin >> radius;
    print_area(radius);
    print_area(20.91);
    print_area(78.01);

}
