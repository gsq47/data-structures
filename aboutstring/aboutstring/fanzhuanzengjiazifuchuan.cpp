/*������һ���ַ�������Ҫ������ַ������� n �β�����ÿ�β��������������֣�(p, l) ��ʾ��ǰ�ַ����д��±�Ϊ p ���ַ���ʼ��
����Ϊ l ��һ���Ӵ�����Ҫ������Ӵ����ҷ�ת���������Ӵ�ԭ��λ�õ����󷽣������õ����ַ�����ʲô��
�ַ������±��Ǵ� 0 ��ʼ�ģ�����Դ������еõ�������Ϣ��
��������:
ÿ���������������һ�����ݣ�ÿ�����ݵ�һ��Ϊԭ�ַ��������Ȳ����� 10 ��
��������Сд�ַ������֡�����������һ������ n ��ʾ�� n ���������ٽ������� n �У�
ÿ��������������ʾÿ�β�����(p , l)��
��֤����Ĳ���һ���Ϸ������õ����ַ������Ȳ����� 1000��*/
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