#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLS = 3;
    int cols = 0;
    int matrix[ROWS][COLS]= {
        {11, 66, 88},
        {32, 33, 3},
        {278, 387, 234}
    };
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;  
}