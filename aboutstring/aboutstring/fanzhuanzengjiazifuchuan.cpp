/*现在有一个字符串，你要对这个字符串进行 n 次操作，每次操作给出两个数字：(p, l) 表示当前字符串中从下标为 p 的字符开始的
长度为 l 的一个子串。你要将这个子串左右翻转后插在这个子串原来位置的正后方，求最后得到的字符串是什么。
字符串的下标是从 0 开始的，你可以从样例中得到更多信息。
输入描述:
每组测试用例仅包含一组数据，每组数据第一行为原字符串，长度不超过 10 ，
仅包含大小写字符与数字。接下来会有一个数字 n 表示有 n 个操作，再接下来有 n 行，
每行两个整数，表示每次操作的(p , l)。
保证输入的操作一定合法，最后得到的字符串长度不超过 1000。*/
/*
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
int main(){
	vector<char> inputstr;
	string input;
	string inputtemp;
	int n;
	vector<vector<int>> caozuo;
	int tempp;
	int templ;
	//vector<int> arr;
	cin >> inputtemp;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++){
		    cin >> tempp >> templ;
			arr.push_back(tempp);
			arr.push_back(templ);
			caozuo.push_back(arr);
			arr.pop_back();
			arr.pop_back();		
		
	}
	
	for (int i = 0; i < inputtemp.length(); i++){
		inputstr.push_back(inputtemp[i]);
	}
	input = inputtemp;
	for (int i = 0; i < caozuo.size(); i++){
		string temp;
		string temp1;
		string temp2;
		for (int j = caozuo[i][0]; j <= caozuo[i][0]+caozuo[i][1]; j++){
			if (j<0 || j>inputtemp.length() - 1 || j + caozuo[i][1] - 1>inputtemp.length() - 1 || j + caozuo[i][1] - 1 < 0 || caozuo[i][1] < 0){
				return 0;
			}
			int left = caozuo[i][0];
			int right = caozuo[i][0]+caozuo[i][1]-1;
			temp1 = inputtemp.substr(0, caozuo[i][0] + caozuo[i][1]);
			temp2 = inputtemp.substr(caozuo[i][1]+caozuo[i][0], inputtemp.length()-caozuo[i][1]-caozuo[i][0]);
			while (left < right){
				swap(inputtemp[left], inputtemp[right]);
				left++; right--;
			}
			temp = inputtemp.substr(caozuo[i][0], caozuo[i][1]);
			input = temp1 + temp + temp2;
			inputtemp = input;
			break;

		}
	}
	cout << input << endl;
	
	system("pause");
	return 0;
}
*/