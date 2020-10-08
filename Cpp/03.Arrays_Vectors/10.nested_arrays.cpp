//------------------ Nested Arrays and Vectors -----------------------------//


#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;

void array_matrix(int mat[][3], int r)
{
    for(int row = 0; row < r; row++ )
    {
        for(int col = 0; col < 3; col++)
        {
            cout << mat[row][col] << '\t';
        }
        
        cout << endl;
    }
}

void vector_matrix(vector<vector<int>> mat)
{
    for(int row = 0; row < mat.size(); row++ )
    {
        for(int col = 0; col < mat[0].size(); col++)
        {
            cout << mat[row][col] << '\t';
        }
        
        cout << endl;
    }
}

int main()
{
    int matrix[][3] = {
        {34, 56, 78},
        {21, 90, 41},
        {98, 67, 56},
        {100, 101, 102}
    };

    vector<vector<int>> matrix2 = {
        {1, 3, 4, 5},
        {8, 9, 0, 2},
        {9, 6, 3, 1}
    };

    array_matrix(matrix, 4);
    vector_matrix(matrix2);

}
