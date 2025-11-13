#include <iostream>
#include <string>
using namespace std;

// Product
void statep0(string word, int idx);
void statep1(string word, int idx);
void statep2(string word, int idx);
void statep3(string word, int idx);

// Union
void stateu0(string word, int idx);
void stateu1(string word, int idx);
void stateu2(string word, int idx);
void stateu3(string word, int idx);
void stateu4(string word, int idx);

// Intersection
void statei0(string word, int idx);
void statei1(string word, int idx);
void statei2(string word, int idx);
void statei3(string word, int idx);
void statei4(string word, int idx);

int main() {
  string word;
  cout << "Enter word: ";
  getline(cin, word);
  cout << "\nProduct: ";
  statep0(word, 0);
  cout << "\nUnion: ";
  stateu0(word, 0);
}

// Product
void statep0(string word, int idx) {
  if (idx == word.length()) {
    cout << "String Rejected" << endl;
    return;
  } else if (word[idx] == 'a') {
    return statep1(word, idx + 1);
  } else if (word[idx] == 'b') {
    return statep3(word, idx + 1);
  } else {
    cout << "Invalid String!" << endl;
    return;
  }
}

void statep1(string word, int idx) {
  if (idx == word.length()) {
    cout << "String Rejected" << endl;
    return;
  } else if (word[idx] == 'a') {
    return statep2(word, idx + 1);
  } else if (word[idx] == 'b') {
    return statep1(word, idx + 1);
  } else {
    cout << "Invalid String!" << endl;
    return;
  }
}

void statep2(string word, int idx) {
  if (idx == word.length()) {
    cout << "String Accepted" << endl;
    return;
  } else if (word[idx] == 'a') {
    return statep2(word, idx + 1);
  } else if (word[idx] == 'b') {
    return statep1(word, idx + 1);
  } else {
    cout << "Invalid String!" << endl;
    return;
  }
}

void statep3(string word, int idx) {
  if (idx == word.length()) {
    cout << "String Rejected" << endl;
    return;
  } else if (word[idx] == 'a' || word[idx] == 'b') {
    return statep3(word, idx + 1);
  } else {
    cout << "Invalid String!" << endl;
    return;
  }
}

// Union
void stateu0(string word, int idx) {
  if (idx == word.length()) {
    cout << "String Rejected" << endl;
    return;
  } else if (word[idx] == 'a') {
    return stateu1(word, idx + 1);
  } else if (word[idx] == 'b') {
    return stateu3(word, idx + 1);
  } else {
    cout << "Invalid String!" << endl;
    return;
  }
}

void stateu1(string word, int idx) {
  if (idx == word.length()) {
    cout << "String Rejected" << endl;
    return;
  } else if (word[idx] == 'a') {
    return stateu1(word, idx + 1);
  } else if (word[idx] == 'b') {
    return stateu2(word, idx + 1);
  } else {
    cout << "Invalid String!" << endl;
    return;
  }
}

void stateu2(string word, int idx) {
  if (idx == word.length()) {
    cout << "String Accepted" << endl;
    return;
  } else if (word[idx] == 'a') {
    return stateu1(word, idx + 1);
  } else if (word[idx] == 'b') {
    return stateu2(word, idx + 1);
  } else {
    cout << "Invalid String!" << endl;
    return;
  }
}

void stateu3(string word, int idx) {
  if (idx == word.length()) {
    cout << "String Rejected" << endl;
    return;
  } else if (word[idx] == 'a') {
    return stateu4(word, idx + 1);
  } else if (word[idx] == 'b') {
    return stateu3(word, idx + 1);
  } else {
    cout << "Invalid String!" << endl;
    return;
  }
}

void stateu4(string word, int idx) {
  if (idx == word.length()) {
    cout << "String Accepted" << endl;
    return;
  } else if (word[idx] == 'a') {
    return stateu4(word, idx + 1);
  } else if (word[idx] == 'b') {
    return stateu3(word, idx + 1);
  } else {
    cout << "Invalid String!" << endl;
    return;
  }
}

// Intersection
void statei0(string word, int idx) {
  if (idx == word.length()) {
    cout << "String Rejected" << endl;
    return;
  } else if (word[idx] == 'a') {
    return statei1(word, idx + 1);
  } else if (word[idx] == 'b') {
    return statei3(word, idx + 1);
  } else {
    cout << "Invalid String!" << endl;
    return;
  }
}

void statei1(string word, int idx) {
  if (idx == word.length()) {
    cout << "String Rejected" << endl;
    return;
  } else if (word[idx] == 'a') {
    return statei1(word, idx + 1);
  } else if (word[idx] == 'b') {
    return statei2(word, idx + 1);
  } else {
    cout << "Invalid String!" << endl;
    return;
  }
}

void statei2(string word, int idx) {
  if (idx == word.length()) {
    cout << "String Accepted" << endl;
    return;
  } else if (word[idx] == 'a') {
    return statei1(word, idx + 1);
  } else if (word[idx] == 'b') {
    return statei2(word, idx + 1);
  } else {
    cout << "Invalid String!" << endl;
    return;
  }
}

void statei3(string word, int idx) {
  if (idx == word.length()) {
    cout << "String Rejected" << endl;
    return;
  } else if (word[idx] == 'a') {
    return statei4(word, idx + 1);
  } else if (word[idx] == 'b') {
    return statei3(word, idx + 1);
  } else {
    cout << "Invalid String!" << endl;
    return;
  }
}

void statei4(string word, int idx) {
  if (idx == word.length()) {
    cout << "String Accepted" << endl;
    return;
  } else if (word[idx] == 'a') {
    return statei4(word, idx + 1);
  } else if (word[idx] == 'b') {
    return statei3(word, idx + 1);
  } else {
    cout << "Invalid String!" << endl;
    return;
  }
}
