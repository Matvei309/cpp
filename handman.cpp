// clear && g++ handman.cpp -o handman.out && ./handman.out

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

/*

[+] Создать подборку слов
[] Выбрать из подборки одно слово. загадать его
[] Если игрок еще не превысил лимит ошибок. но и не разгадал это слово
[]      Сообщить игроку. сколько ошибок он еще имеет право допустить Показать игроку буквы. которые он уже угадал
[]      Показать игроку. какую часть загаданного слова он уже открыл Получить от игрока следующий вариант буквы
[]      Если игрок предложит букву. которую он уже угадал
[]            Получить вариант игрока

*/

int main()
{
    int tries = 10;
    // вектор со словами
    vector <string> words;
    words.push_back("hello");
    words.push_back("word");
    words.push_back("matvey");

    // string baseWord = ? получить слчайное слово с помощью `shuffle`
    // string wordForUser = ? создать строку каждый символ которой - черта (кол-во должно совпадать с длиной baseWord)

    string baseWord = words[0];
    cout << baseWord << endl;

    string wordForUser = string(baseWord.length(), '_');
    cout << wordForUser << endl;

    cout << baseWord.find('h') << endl;
    // как заменить в wordForUser '-' на буквы ?
    
    // // вектор для проверок
    // vector <string> checkWord;
    // string hightWord;
    // cout << "Привет это игра висилица" << endl;
    // cout << "У тебя 10 попыток !" << endl;
    // // for(int i = 0; i < words[0].size(); i++)
    // // {
    // // }
    // checkWord.push_back()

    cout << endl;
    return 0;
}
