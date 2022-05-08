#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    string name = "Kirill";
    string surname("Program");
    string age(3, '7');

    cout << name << endl;
    cout << surname << endl;
    cout << age << endl;

    cout << name + ' ' + age << endl;
    cout << name + " <-> " + age << endl;
    
    cout << name.size() << endl;
    cout << name[0] << name[4] << endl;
    cout << name[name.size() - 1] << endl;

    name[0] = '%';
    cout << name << endl;

    // поиск слева (4)
    cout << name.find('l') << endl;
    // поиск справа (5)
    cout << name.rfind('l') << endl;

    cout << "##############################" << endl;

    for (int i = 0; i < name.size(); i++)
    {
        cout << i << '\t' << name[i] << endl;
        if (name[i] == 'l')
            name[i] = '1';
    }

    cout << name << endl;
    cout << name.find('l') << '\t' << string::npos << endl;

    cout << name.erase(2, 3) << endl;
    cout << name.erase(1) << endl;
    cout << name.erase() << endl;

    cout << name.empty() << endl;
    cout << age.empty() << endl;

    return 0;
}