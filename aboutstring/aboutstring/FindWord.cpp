/*����һ�����䣬�� N ��������ɡ��� i �����ӵĳ���Ϊ L[i]�������ĵ��ʸ���Ϊ W[i]��
���Ӳ������κγ���ĸ�Ϳո�() ��ķ��š�
ÿ�������ڲ����������ɸ����ʣ��ɿո�() �ָ������Ӳ�����������Ŀո�

������ M ����ѯ��ÿ����ѯ����һ�����ӣ���Ҫ�ڶ�����Ѱ����ͬ�����������ľ��ӡ��ظ��ĵ���ֻ��һ�Σ��Ҳ����ִ�Сд��
�������ݽ���֤����Ǵ�����Ψһ�ġ�
����
��һ������������ N �� M��
�������� N + M �У�ÿ�а���һ�����ӡ�
ǰ N �д�������еľ��ӣ��� M �б�ʾ��ѯ��*/
/*
#include<stdlib.h>
#include<stdio.h>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int search(vector<string> paper,vector<string> search ){
	int count=0;
	for (int i = 0; i < paper.size(); i++){
		for (int j = 0; j < search.size(); j++){
			if (search[j] == paper[i]){
				count++;
				break;
			}
		}
	}
	return count;
}
int main(){
	vector<vector<string>> duanluo;
	vector<vector<string>> searchsentence;
	vector<string> sentence;
	int max=0;
	vector<vector<string>>output;
	int numberofsentence;
	int numberofsearch;
	
	cin >> numberofsentence>>numberofsearch;
	//cout << endl;
	fflush(stdin);
	for (int i = 0; i < numberofsentence; i++){
		string word;
		vector<string> temp;
		getline(cin, word);
		int left = 0;
		
		for (int j = 0; j < word.size(); j++){
			string words;
			if (word[j] == ' '||j==word.size()-1){
				if (word[j] == ' '){
					words = word.substr(left, j - left);
					left = j + 1;
					temp.push_back(words);
				}
				else{
					words = word.substr(left, j - left+1);
					
					temp.push_back(words);
				}
				
			}
			
		}
		duanluo.push_back(temp);
		
	}
	fflush(stdin);//��ջ�����������֮ǰ������л��еȲ�����getline�ǲ�����Կ��ַ������Ի�Ĭ����������һ�����ַ���
	//����ְѿ��ַ�����vector�д洢�����
	for (int i = 0; i < numberofsearch; i++){
		string word;
		vector<string> temp;
		getline(cin, word);
		int left = 0;
		for (int j = 0; j < word.size(); j++){
			string words;
			if (word[j] == ' ' || j == word.size() - 1){
				if (word[j] == ' '){
					words = word.substr(left, j - left);
					left = j + 1;
					temp.push_back(words);
				}
				else{
					words = word.substr(left, j - left + 1);

					temp.push_back(words);
				}
			}
		}
		searchsentence.push_back(temp);

	}
	output.resize(numberofsearch);
	for (int i = 0; i < searchsentence.size(); i++){

		for (int j = 0; j < duanluo.size(); j++){
			
			if (search(duanluo[j], searchsentence[i])>max){
				max = search(duanluo[j], searchsentence[i]);
				if (!output[i].empty()){
					output[i].pop_back();
				}
				output[i] = duanluo[j];
				//output.push_back(duanluo[j]);
			}
			
		}
		max = 0;
		
	}
	for (int i = 0; i < output.size(); i++){
		if (output[i].empty()){
			cout << "the i has no similar sentence" << endl;
			continue;
		}
		else{
			for (int j = 0; j < output[i].size(); j++){
				cout << output[i][j] << " ";
			}
		}
		
		cout << endl;
	}
	return 0;
}
*/