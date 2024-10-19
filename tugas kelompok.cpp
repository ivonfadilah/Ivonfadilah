#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const std::string& word) {
    int left = 0;
    int right = word.length() - 1;

    while (left <= right) {
        if (word[left] != word[right]) {
            return false; // Kata tidak palindrom
        }

        ++left;
        --right;
    }

    return true;   // Kata palindrom
}

int main() {
    std::cout << "Masukkan sebuah kata: ";

    std::string inputWord;
    std::cin >> inputWord;

    bool result = isPalindrome(inputWord);

    if (result)
        std::cout << "Hasilnya : True" << '\n';
    else
        std::cout << "Hasilnya : False" << '\n';

    return 0;
}
