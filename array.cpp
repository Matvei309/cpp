#include <iostream>

using namespace std;

int main()
{
    const int LENGTH = 3;
    int array[LENGTH] = {321, 123, 3};
    cout << array << endl;
    for (int i = 0; i < LENGTH; i++)
        cout << array[i] << endl;

    return 0;
}

// 0-9
// 10 - a
// 11 - b 
// 12 - c
// 13 - d
// 14 - e
// 15 - f
