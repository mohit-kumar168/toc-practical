#include <iostream>
#include <string>
using namespace std;

string tape;
int head;
bool processedAny = false;

void q0();
void q1_find_a();
void q2_find_b();
void q3_find_c();
void q_check_end();

void accept() {
  cout << "ACCEPTED" << endl;
  exit(0);
}

void reject() {
  cout << "REJECTED" << endl;
  exit(0);
}

void q0() {
  head--;
  while (tape[head] != '#')
    head--;
  head++;
  q1_find_a();
}

void q1_find_a() {
  while (tape[head] == 'd')
    head++;
  if (tape[head] == 'a') {
    tape[head] = 'd';
    head++;
    q2_find_b();
    return;
  }

  if (tape[head] == '#')
    return q_check_end();

  reject();
}

void q2_find_b() {
  while (tape[head] == 'a' || tape[head] == 'd')
    head++;
  if (tape[head] == 'b') {
    tape[head] = 'd';
    head++;
    q3_find_c();
    return;
  }

  reject();
}

void q3_find_c() {
  while (tape[head] == 'b' || tape[head] == 'd')
    head++;
  if (tape[head] == 'c') {
    tape[head] = 'd';
    processedAny = true;
    q0();
  }

  reject();
}

void q_check_end() {
  if (!processedAny)
    reject();

  int L = 0, R = tape.size() - 1;
  for (int i = L + 1; i < R; i++) {
    if (tape[i] != 'd')
      reject();
  }
  accept();
}

int main() {
  string str;
  cout << "Enter String: ";
  getline(cin, str);
  tape = '#' + str + '#';
  head = tape.size() - 1;
  q0();
  return 0;
}
