#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    // Check if it is possible to get a palindrome by replacing all the '?'
    int num_changes = 0;
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - 1 - i]) {
            num_changes++;
        }
    }
    if (num_changes > s.size() / 2) {
        cout << "-1" << endl;
        return 0;
    }

    // Replace '?' with the lexicographically smallest character to get a palindrome
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] == '?' && s[s.size() - 1 - i] == '?') {
            s[i] = 'a';
            s[s.size() - 1 - i] = 'a';
        } else if (s[i] == '?') {
            s[i] = s[s.size() - 1 - i];
        } else if (s[s.size() - 1 - i] == '?') {
            s[s.size() - 1 - i] = s[i];
        }
    }

    cout << s << endl;
    return 0;
}
