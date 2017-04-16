/*给定一个段落，由 N 个句子组成。第 i 个句子的长度为 L[i]，包含的单词个数为 W[i]。
句子不包含任何除字母和空格() 外的符号。
每个句子内部，含有若干个单词，由空格() 分隔。句子不会包含连续的空格。

随后给定 M 个查询，每个查询包含一个句子，需要在段落中寻找相同单词数量最多的句子。重复的单词只计一次，且不区分大小写。
输入数据将保证结果是存在且唯一的。
输入
第一行是两个整数 N 和 M。
接下来的 N + M 行，每行包含一个句子。
前 N 行代表段落中的句子，后 M 行表示查询。*/
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
	fflush(stdin);//清空缓冲区，由于之前输入后有换行等操作，getline是不会忽略空字符，所以会默认你输入了一个空字符，
	//会出现把空字符放入vector中存储的情况
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