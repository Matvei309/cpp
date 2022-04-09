#include <iostream>
// clear && g++ main.cpp && ./a.out
using namespace std;

int main()
{

    int num;
    char forStart = 'y';
    bool index = true;
    int counterGame = 0;
    while (forStart == 'y')
    {
        counterGame += 1;
        cout << "1lvl - Easy" << endl;
        cout << "2lvl - Normal" << endl;
        cout << "3lvl - Hard " << endl;
        cout << "Which you want lvl? - ";
        cin >> num;
        
        if (num == 1)
            cout << "Your lvl Easy" << endl;
        else if (num == 2)
            cout << "Your lvl Normal" << endl;
        else if (num == 3)
            cout << "Your lvl Hard" << endl;
        else
        {
            cout << "Lvl isn't defind" << endl;
            index = 0;
        }
        if (index == 0)
            break;
        cout << "\n**Played an exciting game**" << endl;
        cout << "\n Ypu have already " << counterGame << " game" << endl;
        cout << "\nDo you want to play again? (y/n): " << endl;
        cin >> forStart;
    }
    cout << "okey bye" << endl;
    return 0;
}


