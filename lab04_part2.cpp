//lab04_part1 680615028
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    cout << "Enter a word: ";
    getline(cin, word);

    bool isPalindrome = true;
    int length = word.length();

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

    return 0;
}