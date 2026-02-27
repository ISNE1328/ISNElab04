//lab04_part1 680615028
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int size = 100;

    char* word = new char[size];

    cout << "Enter a word: ";
    cin.getline(word, size);

    int length = strlen(word);
    bool isPalindrome = true;

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "It is a palindrome!" << endl;
    else
        cout << "It is NOT a palindrome." << endl;

    delete[] word;
    return 0;
}