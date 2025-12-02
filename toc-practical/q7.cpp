#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> s;

void read1(string str, int idx);
void read2(string str, int idx);

void read1(string str, int idx) {
  if (str[idx] == 'a') {
    s.push('a');
    read1(str, idx + 1);
    return;
  }

  if (str[idx] == 'b') {
    if (!s.empty() && s.top() == 'a') {
      s.pop();
      read2(str, idx + 1);
      return;
    }
  }
  cout << "REJECTED" << endl;
}

void read2(string str, int idx) {
  if (idx == str.size()) {
    if (s.empty()) {
      cout << "ACCEPTED" << endl;
      return;
    }
  }

  if (str[idx] == 'b') {
    if (!s.empty() && s.top() == 'a') {
      s.pop();
      read2(str, idx + 1);
      return;
    }
  }
  cout << "REJECTED" << endl;
}

int main() {
  string str;
  cout << "Enter String: ";
  getline(cin, str);
  read1(str, 0);
  return 0;
}
