// 利用stl快速得到枚举排列
//fangfa1
/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	while (cin >> s) {
		sort(s.begin(), s.end());
		do {
			cout << s << ' ';
		} while (next_permutation(s.begin(), s.end()));
		cout << endl;
	}
	return 0;
}
*/
/*
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> result;

void permute(string& str, int depth, int n){
	if (depth == n){
		result.push_back(str);
		return;
	}
	for (int i = depth; i< n; i++){
		swap(str[depth], str[i]);
		permute(str, depth + 1, n);
		swap(str[depth], str[i]);
	}
}

int main(){
	string str;
	cin >> str;
	permute(str, 0, str.size());
	for (int i = 0; i < result.size(); i++){
		cout << result[i] << endl;
	}
	cout << sqrt(4) << endl;
	system("pause");
	return  0;
}
*/