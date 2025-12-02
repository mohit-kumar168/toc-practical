#include <iostream>
#include <string>
using namespace std;

string tape;
int head;

void qInc();

void accept() {
  cout << "Final Tape: " << tape << endl;
  exit(0);
}

void reject() {
  cout << "REJECTED" << endl;
  exit(0);
}

void qInc() {
  if (tape[head] == '0') {
    tape[head] = '1';
    accept();
  }
  if (tape[head] == '1') {
    tape[head] = '0';
    head--;
    qInc();
    return;
  }
  if (tape[head] == '#') {
    tape.insert(1, "1");
    accept();
  }
  reject();
}

int main() {
  string str;
  cout << "Enter binary string: ";
  getline(cin, str);
  tape = '#' + str + '#';
  head = tape.size() - 2;
  qInc();
  return 0;
}
