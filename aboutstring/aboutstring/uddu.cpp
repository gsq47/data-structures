/*
#include<stdlib.h>
#include<stdio.h>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main(){
	int number;
	vector<int> arr;
	int a;
	cin >> number;
	
	for (int i = 0; i < number; i++){
		cin >> a;
		arr.push_back(a);
	}
	
	int left = 0;
	int width = 0;
	int outputl = -1;
	int outputr = -1;
	int count = 0;
	int tempwidth;
	int halfwidth;
	int right = number - 1;
	while (left < right - 1){

		if (arr[left + 1] - arr[left]>0){
			outputl = left;
			for (int i = left; i<right - 1; i++){
				if (arr[i + 1] - arr[i]<0){
					
					if (count == 1){
						tempwidth = halfwidth + i - left;
						if (tempwidth>width){
							width = tempwidth;
							outputr = i;
						}
						count = 0;
					}
					left = i + 1;
					tempwidth = 0;
					halfwidth = 0;
					break;
				}
				if (arr[i + 1] == arr[i]){
					if (count == 1){
						if (i == right){
							count = 0;
							halfwidth = 0;
							tempwidth = 0;
							left = i + 1;
							break;
						}
						else{
							tempwidth = halfwidth + i - left;
							if (tempwidth>width){
								width = tempwidth;
								outputr = i;
							}
						}

					}
					else{//count==0
						left = i + 1;
						break;
					}
				}
			}
		}
		else if (arr[left + 1] - arr[left] > 0){
			outputl = left;
			for (int i = left; i<right - 1; i++){
				if (arr[i + 1] - arr[i]>0){

					if (count == 1){
						tempwidth = halfwidth + i - left;
						if (tempwidth>width){
							width = tempwidth;
							outputr = i;
						}
						count = 0;
					}
					left = i + 1;
					tempwidth = 0;
					halfwidth = 0;
					break;
				}
				if (arr[i + 1] == arr[i]){
					if (count == 1){
						if (i == right){
							count = 0;
							halfwidth = 0;
							tempwidth = 0;
							left = i + 1;
							break;
						}
						else{
							tempwidth = halfwidth + i - left;
							if (tempwidth>width){
								width = tempwidth;
								outputr = i;
							}
						}

					}
					else{//count==0
						left = i + 1;
						break;
					}
				}
			}
		}
		else{

			left = left + 1;
		}

	}
	cout << outputl << outputr;
	system("pause");
	return 0;
}
*/