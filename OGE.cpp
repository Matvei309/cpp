#include <iostream>
using namespace std;

int main()
{ 
    int startNum = 0;
    int checkNum = 0;
    int counter = 0;
    
    cout << "How numbers?: ";
    cin >> startNum; 

    for (; startNum > 0; startNum--)
    {
        cout << "Your num?: ";
        cin >> checkNum;

        if (checkNum % 6 == 0 && checkNum % 10 == 4)
            counter += 1;
    }
    cout << "over " << counter << endl;
    return 0;
}
// clear && g++ OGE.cpp && ./a.out