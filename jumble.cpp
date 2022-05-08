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
        {"word0", "hint0"},
        {"word1", "hint1"},
        {"word2", "hint2"},
        {"word3", "hint3"},
        {"word4", "hint4"},
    };

    int idxRandWord = rand() % NUM_WORDS;
    cout << idxRandWord << endl;

    string word = WORDS[idxRandWord][0];
    string wordHint = WORDS[idxRandWord][1];

    cout << "Word -> " << word << endl;
    cout << "Hint -> " << wordHint << endl;

    return 0;
}