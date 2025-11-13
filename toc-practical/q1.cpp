#include <iostream>
#include <string>
using namespace std;

void state0(string word, int idx);

void state3(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Accepted"<<endl;
	return;
    } else if(word[idx] == '0' || word[idx] == '1') {
	return state3(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state2(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected"<<endl;
	return;
    } else if(word[idx] == '1') {
	return state3(word, idx + 1);
    } else if(word[idx] == '0') {
	return state0(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state1(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected"<<endl;
	return;
    } else if(word[idx] == '1') {
	return state2(word, idx + 1);
    } else if(word[idx] == '0') {
	return state0(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

void state0(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected"<<endl;
	return;
    } else if(word[idx] == '1') {
	return state1(word, idx + 1);
    } else if(word[idx] == '0') {
	return state0(word, idx + 1);
    } else {
	cout<<"Invalid Strin!"<<endl;
	return;
    }
}

int main() {
    string word;
    cout<<"Enter a binary string: ";
    getline(cin, word);
    state0(word, 0);
    return 0;
}
