#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int ROWS = 3; // rows - строки
    const int COLS = 3; // cols - columns - столбцы

    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Matrix -> " << matrix << endl;
    // cout << matrix[1] << endl;
    // cout << matrix[1][2] << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < ROWS; j++)
            cout << matrix[i][j] << '\t';
        cout << endl;
    }
    cout << endl;

    matrix[2][2] = 911;
    matrix[1][0] = 44;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < ROWS; j++)
            cout << matrix[i][j] << '\t';
        cout << endl;
    }


    return 0;
}


// list_nums = [
//     [1, 2, 3],
//     [3, 4, 5],
//     [5, 6, 7]
// ]
// list_nums[1][1]


// 0-9
// 10 - a
// 11 - b 
// 12 - c
// 13 - d
// 14 - e
// 15 - f
