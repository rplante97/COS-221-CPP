#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string &s);

int main() {
    string input;
    cout << "Code written by Ryan Plante, Sept 19 2018" << endl;

    //Get user input
    cout << "Please enter a string: ";
    getline(cin, input);
    cout << endl;

    //Return message based on result of palindrome function
    if(isPalindrome(input)) {
        cout << input << " is a palindrome!" << endl;
    }
    else {
        cout << input << " is NOT a palindrome" << endl;
    }
}

bool isPalindrome(const string &s){
    string normalized_string, reversed_string;

    //Can't modify a const
    normalized_string = s;

    //convert string to uppercase
    transform(normalized_string.begin(), normalized_string.end(), normalized_string.begin(), ::toupper);

    //remove any spaces (according to wikipedia a palindrome has no regard for spacing)
    normalized_string.erase(remove(normalized_string.begin(), normalized_string.end(), ' '), normalized_string.end());
    reversed_string = normalized_string;

    //Reverse the string, store in reversed_string
    reverse(reversed_string.begin(), reversed_string.end());

    //Check if palindrome
    if (normalized_string == reversed_string){
        return 1;
    }
    else {
        return 0;
    }
}