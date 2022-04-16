#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int randomNum = rand() % 100 + 1;
    int playerNum;
    int counter = 0;
    cout << " WELCOME " << endl;
    
    do
    {
    cout << "enter your num ";
    cin >> playerNum;
    counter++;
    if(playerNum > randomNum)
       cout << "Too hight" << endl;
    else if(playerNum < randomNum)
        cout << "Too low" << endl;
    else
        cout << "you right" << endl;
    }       
        while (playerNum != randomNum);

    cout << "Your try " << counter << endl;
    return 0;
}