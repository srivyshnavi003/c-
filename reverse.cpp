#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    int n = str.length();
    for(int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Reversed string: " << reverseString(input) << endl;
    return 0;
}
