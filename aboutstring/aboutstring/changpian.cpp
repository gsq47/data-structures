/*
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
int main(){
	int number;
	int songtime;
	int cdtime;
	cin >> number >> songtime >> cdtime;
	int pernum = 0;
	if (songtime > cdtime){
		return 0;
	}
	pernum = (cdtime + 1) / (songtime + 1);
	if (pernum % 13 == 0){
		pernum -= 1;
	}
	int numberofcd;
	if (number%pernum == 0){
		numberofcd = number / pernum;
	}
	else{
		numberofcd = number / pernum;
		numberofcd += 1;
	}
	cout << numberofcd;
	system("pause");
	return 0;
}
*/