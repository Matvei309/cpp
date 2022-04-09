#include <iostream>
using namespace std;

int main()
{ 
    int startNum = 0;
    int checkNum = 0;
    int counter = 0;
    cout << "Your num?";
    cin >> startNum; 
    while(startNum > 0)
    {
        cout << "Your num? ";
        cin >> checkNum;
        if (checkNum / 6 % 10 && checkNum % 10 == 4)
        {  
            counter += 1;
        }
        startNum -= 1;
    }
    cout << "over " << counter << endl;
}
// clear && g++ OGE.cpp && ./a.out