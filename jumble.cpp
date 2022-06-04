#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    // initialize WORD 0, HINT 1, NUM_FIELDS 2
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = {
        {"matvey", "My name"},
        {"kirill", "Name my techer"},
        {"hello", "common hello"},
        {"world", "The place where we all are"},
        {"word", "What's in ever sentence"},
    };

    cout << "START GAME" << endl;
    int idxRandWord = rand() % NUM_WORDS;
    // cout << idxRandWord << endl;

    string word = WORDS[idxRandWord][0];
    string wordHint = WORDS[idxRandWord][1];

    // cout << "Word -> " << word << endl;
    // cout << "Hint -> " << wordHint << endl;
    // cout << " len word -> " << word.length() << endl;
    int counter = 3;
    bool trueFasle;
    string userWord;
    for (int i = 0; i < word.length(); i++)
    {
        int randf = rand() % NUM_WORDS;
        int rands = rand() % NUM_WORDS;


        char historyWord = word[randf];
        word[randf] = word[rands];
        word[rands] = historyWord;
        // cout << i << endl;
    }   
    for (int j = 0; j < counter;)   
    {
        cout << "NEW WORD -> " << word << endl;
        cout << counter - j << " <- NUMBER OF ATTEMPTS!!!" << endl;
        cout << "what word? " << endl;
        cin >> userWord;
        if (userWord == "continue")
            j += counter;
        else if (WORDS[idxRandWord][0] == userWord)
        {
            cout << "You win" << endl;
            j += counter;
        }
        else
        {
            cout << "You want hint? (y/n)" << endl;
            char y_n;
            cin >> y_n;
            if (y_n == 'y')
                cout << WORDS[idxRandWord][1] << " <- It is your hint" << endl;
            j += 1;
        }
    }
    return 0;
}