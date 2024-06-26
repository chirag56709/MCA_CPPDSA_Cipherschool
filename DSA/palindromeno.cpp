#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(int number) {
    
   string original = to_string(number);

   string reversed = original;
    reverse(reversed.begin(), reversed.end());

    return original == reversed;
}

int main() {
    int number = 12321;

    if (isPalindrome(number)) {
        std::cout << number << " is a palindrome." << std::endl;
    } else {
        std::cout << number << " is not a palindrome." << std::endl;
    }

    return 0;
}
