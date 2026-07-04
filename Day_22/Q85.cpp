#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char str[100], temp[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // copy original string to temp
    int i = 0;
    while (str[i] != '\0') {
        temp[i] = str[i];
        i++;
    }
    temp[i] = '\0';

    // reverse the temp string
    reverse(temp, temp + i);

    // compare original and reversed
    bool isPalindrome = true;

    for (int j = 0; j < i; j++) {
        if (str[j] != temp[j]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Palindrome string";
    else
        cout << "Not a palindrome string";

    return 0;
}