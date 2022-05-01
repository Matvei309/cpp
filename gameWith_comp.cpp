#include <iostream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
srand(static_cast<unsigned int>(time(0)));
int up = 100;
int down = 1;
int num;
int yourNum;
string const UP = "Больше";
string const DOWN = "Меньше";
string checkWord;

cout << "Your num ? ";
cin >> yourNum;
do
    {
    cout << "up -> "<< up << endl;
    cout << "down -> "<< down << endl;
    num = rand() % up + down;
    cout << "This is bot number -> " << num << endl;
    cout << "Больше или Меньше или Попал" << endl;
    cin >> checkWord;

    if(checkWord == "Попал")
        {
        cout << "Bot Win!!!!!!!!!!" << endl;
        continue;
        }
    else if(checkWord == "Меньше")
        {
        cout << num << endl;
        up = num - down + 1;
        }
    else if(checkWord == "Больше")
        {
        cout << num << endl;
        down = num;
        up = up - down + 1;
        }

    } while(yourNum != num);
return 0;

}