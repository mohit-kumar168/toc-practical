#include <iostream>
#include <string>
using  namespace std;

void state0(string word, int idx);
void state1(string word, int idx);
void state2(string word, int idx);
void state3(string word, int idx);
void state4(string word, int idx);
void state5(string word, int idx);
void state6(string word, int idx);
void state7(string word, int idx);
void state8(string word, int idx);
void state9(string word, int idx);
void state10(string word, int idx);
void state11(string word, int idx);
void state12(string word, int idx);
void state13(string word, int idx);
void state14(string word, int idx);

int main() {
    string word;
    cout<<"Enter word: ";
    getline(cin, word);
    state0(word, 0);
    return 0;
}

void state0(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state1(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state8(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state1(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state2(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state5(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state2(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state3(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state2(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state3(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state4(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state2(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state4(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Accepted"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state4(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state2(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state5(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state6(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state5(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state6(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state6(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state7(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state7(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Accepted"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state6(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state5(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state8(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state9(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state12(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state9(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state9(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state10(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state10(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state11(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state10(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state11(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Accepted"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state9(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state10(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state12(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state12(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state13(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state13(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state12(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state14(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state14(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Accepted"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state12(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state14(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}













































