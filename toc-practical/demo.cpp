#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> s;

// Function declarations
void read1(string str, int idx);
void read2(string str, int idx);
void read3(string str, int idx);

void read1(string str, int idx) {
    // If input is blank (end of string), ACCEPT
    if (idx == str.size()) {
        cout << "ACCEPT\n";
        return;
    }

    // Transition: a -> push(a) -> read2
    if (str[idx] == 'a') {
        s.push('a');
        read2(str, idx + 1);
        return;
    }

    // No valid move
    cout << "REJECT\n";
}

void read2(string str, int idx) {
    // If input is over but we still have stack elements
    if (idx == str.size()) {
        cout << "REJECT\n";
        return;
    }

    char c = str[idx];

    // a -> push(a) -> stay in read2
    if (c == 'a') {
        s.push('a');
        read2(str, idx + 1);
        return;
    }

    // b -> pop(a) -> read3
    if (c == 'b') {
        if (!s.empty() && s.top() == 'a') {
            s.pop();
            read3(str, idx + 1);
            return;
        }
    }

    cout << "REJECT\n";
}

void read3(string str, int idx) {
    // If blank (end of string)
    if (idx == str.size()) {
        // blank -> pop(blank) -> ACCEPT
        if (s.empty()) {
            cout << "ACCEPT\n";
        } else {
            cout << "REJECT\n";
        }
        return;
    }

    char c = str[idx];

    // a|b -> pop(a) -> read3
    if ((c == 'a' || c == 'b') && !s.empty() && s.top() == 'a') {
        s.pop();
        read3(str, idx + 1);
        return;
    }

    cout << "REJECT\n";
}

int main() {
    string input;
    cout << "Enter string: ";
    getline(cin, input);

    // Start from read1
    read1(input, 0);
    return 0;
}
