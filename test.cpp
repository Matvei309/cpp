#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0)));
    int counter;
    for (int i = 0; i <= 5; i++)
    {
        counter = rand() % 76 + 123;
        cout << i << '\t' << counter << endl;

    }
    return 0 ;
}

