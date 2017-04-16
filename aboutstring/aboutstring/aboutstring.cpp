/*
#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
	string biaodashi;
	int count = 0;
	cin >> biaodashi;
	if (biaodashi.length() == 0){
		return 0;
	}
	for (int i = 0; i<biaodashi.length(); i++){

		switch (biaodashi[i]){
		case '+':
			count += (int)(biaodashi[i + 1]-'0');
			i++;
			break;
		case'-':
			count -= (int)(biaodashi[i + 1]-'0');
			i++;
			break;
		case'*':
			count *= (int)(biaodashi[i + 1]-'0');
			i++;
			break;
		default:
			count = (biaodashi[i]-'0');
			break;
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}
*/