#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0, remainder;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        cout << "Palindrome number";
    else
        cout << "Not a palindrome";

    return 0;
}