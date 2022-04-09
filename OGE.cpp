#include <iostream>
using namespace std;

/*
    FOR
    for (int counter = 0; counter < 30; ++counter)
        cout << counter << "\t" << counter % 10 << endl;

    WHILE
    int counter = 0;
    while (counter < 30)
    {
        cout << counter << "\t" << counter % 10 << endl;
        ++counter; // counter += 1 // increase - увеличивать
    }
*/

int main()
{ 
    int checkNum;
    int counter = 0;
    int nNumbers; // декларирование переменной

    cout << "How many numbers? ";
    cin >> nNumbers; // сколько чисел введёт пользователь

    while(nNumbers > 0)
    {
        cout << "Your num?: ";
        cin >> checkNum;

        if (checkNum % 6 == 0 && checkNum % 10 == 4)
            counter += 1;
    
        nNumbers -= 1;
    }
    cout << "Result: " << counter << endl;
    return 0;
}
// clear && g++ OGE.cpp -o OGE.out && ./OGE.out