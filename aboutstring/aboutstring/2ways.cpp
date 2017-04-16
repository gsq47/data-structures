/*
#include<stdlib.h>
#include<stdio.h>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main(){
	string input;
	vector<int> childs;
	vector<int> child2;
	int countofzero = 0;
	cin >> input;
	int i = 0;
	for (; i < input.length(); i++){
			if (input[i] != '0'){
				childs.push_back(input[i]-'0');
				
			}
			else{
				if (countofzero < 1){
					countofzero++;
					i++;
					
				}
				else{
					break;
				}
				
			   }
		}
	int front = 1;
	int last = childs.size() - 1;
	for (int i = 0; i < childs.size(); i++){
		for (int j = 0; j < childs.size() - i - 1; j++){
			if (childs[j]>childs[j + 1]){
				int temp = childs[j];
				childs[j] = childs[j + 1];
				childs[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < childs.size(); i++){
		cout << childs[i];
	}
	cout << endl;
	system("pause");
	}
	

	
	*/