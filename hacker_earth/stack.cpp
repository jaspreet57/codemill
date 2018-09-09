#include <bits/stdc++.h>

using namespace std;

void setFileStreams(){
	#ifndef ONLINE_JUDGE
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for writing output to output.txt
		freopen("output.txt", "w", stdout);
	#endif
}


// normal stack below
int n = 15;
int top = -1;

void push(char stack[], char x){
	if(top == n-1){
		cout << "Stack Overflow !" << endl;
		return;
	}
	top += 1;
	stack[top] = x;
}

void pop(){
	if(top == -1){
		cout << "Stack is empty" << endl;
		return;
	}
	top--;
}

int main() {
	setFileStreams();
	string input_string;
	char stack[n];
	getline(cin, input_string);
	char * cstr = new char [input_string.length()+1];
	strcpy (cstr, input_string.c_str());
	for(int i=0; i<strlen(cstr); i++) {
		if(cstr[i] == '('){
			push(stack, '(');
		}
		if(cstr[i] == ')'){
			if(top == -1){
				top -= 1;
				break;
			} else {
				pop();
			}
		}
	}
	if(top == -1){
		cout << "String is balanced" << endl;
	} else {
		cout << "String is not balanced" << endl;
	}
	return 0;
}

