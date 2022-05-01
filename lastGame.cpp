#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
<<<<<<< HEAD
    // cout << static_cast<unsigned int>(-time(0)) << endl;
    // srand(time(0));    

    const int LOW = 123;
    const int UP  = 200;

    for (int i = 0; i < 5; i++)    
        cout << i + 1 << '\t' << rand() % (UP - LOW + 1) + LOW << endl;

    return 0;
=======
<<<<<<< HEAD
    srand(static_cast < unsigned int > (time(0)));
=======
>>>>>>> 273b38f07200e849ca6990c6d1d3d29482f4b852
    srand(static_cast<unsigned int>(time(0))); // получить случайное число для начального посева

    cout << time(0) << "s " << time(0) / 60 / 60 << "h " << time(0) / 60 / 60 / 24 << "d ";
    cout << time(0) / 60 / 60 / 24 / 365 << "y " << endl; // timestamp

    // rand() []
    // rand() % 100 [0, 99]
    // rand() % 100 + 1 [1, 100]

>>>>>>> 48014315c1cf0c94d92638fca9781fa3359b2778
    int randomNum = rand() % 100 + 1;
    int playerNum;
    int counter = 0;
    cout << " WELCOME " << endl;
    
    do
    {
        cout << "enter your num ";
        cin >> playerNum;
        counter++;
     
        if (playerNum > randomNum)
            cout << "Too high" << endl;
        else if (playerNum < randomNum)
            cout << "Too low" << endl;
        else
            cout << "you right" << endl;
    } while (playerNum != randomNum);

    cout << "Your try " << counter << endl;
    return 0;
}