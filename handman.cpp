// clear && g++ handman.cpp -o handman.out && ./handman.out

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    int tries = 10;
    char checkChar;
    // вектор со словами
    vector <string> words;
    words.push_back("hello");
    words.push_back("word");
    words.push_back("matvey");
    words.push_back("algorithm");
    
    // string baseWord = ? получить слчайное слово с помощью `shuffle`
    // string wordForUser = ? создать строку каждый символ которой - черта (кол-во должно совпадать с длиной baseWord)
    
    // случайный элемент 
    srand(time(0));
    int randNum = rand() % words.size();
    random_shuffle(words.begin(), words.end());

    // Вступление
    cout << "START" << endl;
    cout << "Привет, это игра висилца" << endl;
    cout << "В ней ты должен отгатать слово" << endl;
    cout << "У тебя "<< tries << " попыток" << endl;
    cout << endl << endl;
    
    // хранение слов
    string baseWord = words[randNum];
    string wordForUser = string(baseWord.length(), '_');

    cout << wordForUser << endl;
    // игровой цикл
    while (tries > 0)
    {
        if (baseWord == wordForUser)
            break;
        cout << "Буква -> ";
        cin >> checkChar;
        int findIndex = baseWord.find(checkChar);
        
        if (findIndex <= baseWord.length())
        {
            wordForUser[findIndex] = baseWord[findIndex];
            for (int i = findIndex + 1; i < baseWord.length(); i++)
            {
                if (checkChar == baseWord[i])
                    wordForUser[i] = baseWord[i];
            }
        cout << wordForUser << endl;
        }
        
        else
        {
        cout << "Попробуй еще раз" << endl;
        cout << "У тебя "<< tries << " попыток" << endl;
        tries -= 1;
        cout << wordForUser << endl;
        }
    }
    cout << endl;
    return 0;
}
