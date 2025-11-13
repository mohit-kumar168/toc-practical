#include <iostream>
#include <string>
using namespace std;

void state0(string word, int idx);

void state2(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Rejected!"<<endl;
	return;
    } else {
	return state2(word, idx + 1);
    }
}

void state1(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Accepted"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state2(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state0(word, idx + 1);
    } else {
	cout<<"Invalid String"<<endl;
	return;
    }
}

void state0(string word, int idx) {
    if(idx == word.length()) {
	cout<<"String Accepted"<<endl;
	return;
    } else if(word[idx] == 'a') {
	return state1(word, idx + 1);
    } else if(word[idx] == 'b') {
	return state0(word, idx + 1);
    } else {
	cout<<"Invalid String!"<<endl;
	return;
    }
}

int main() {
    string word;
    cout<<"Enter word (containing a, b): ";
    getline(cin, word);
    state0(word, 0);
    return 0;
}
