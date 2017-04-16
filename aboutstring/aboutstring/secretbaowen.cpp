/*
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<stack>
#include<iostream>
using namespace std;
int main(){
	string secret_report;
	cin >> secret_report;
	stack<char> secret;
	int count = 0;
	
	if (secret_report[0] != '@' && secret_report[0] != '#' && secret_report[0] != '$'){
		cout << "false" << endl;
		return 0;
	}
	else{
		secret.push(secret_report[0]);
	}
	for (int i = 1; i < secret_report.length(); i++){
		switch (secret_report[i]){
		case '@':
		case '#':
		case '$':
			secret.push(secret_report[i]);
			break;
		case '&':
			if (secret.top() == '@'){
				secret.pop();
				if (secret.empty()){
					cout << "true" << endl;
					return 0;
				}
				break;
			}
			else{
				cout << "false" << endl;
				return 0;
			}
		case '^':
			if (secret.top() == '#'){
				secret.pop();
				if (secret.empty()){
					cout << "true" << endl;
					return 0;
				}
				break;
			}
			else{
				cout << "false" << endl;
				return 0;
			}
		case '%':
			if (secret.top() == '$'){
				secret.pop();
				if (secret.empty()){
					cout << "true" << endl;
					return 0;
				}
				break;
			}
			else{
				cout << "false" << endl;
				return 0;
			}
		default:
			break;
		}
	}
	cout << "false" << endl;
	
	return 0;
}
*/