#include<stdlib.h>
#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;
int main(){
	vector<int>inputarr;
	int numberofarr;
	int half = 0;//任意最高点或最低点
	int outputleft=0;//区间左侧
	int templeft = 0;
	int outputright = 0;//区间右侧
	int width = 0;//区间长度
	int minusi = 0;
	cin >> numberofarr;
	for (int i = 0; i < numberofarr; i++){
		int temp;
		cin >> temp;
		inputarr.push_back(temp);
	}
	int *minusarr = (int*)malloc(sizeof(int)*(numberofarr - 1));//用变量定义数组长度时两种方式
	//1.malloc
	//2 vector<int>
	for (int i = 0; i < inputarr.size() - 1; i++){
		minusarr[i] = inputarr[i + 1] - inputarr[i];
	}
	outputleft = minusi;
	templeft = minusi;
	int count = 0;
	while (minusi<numberofarr - 1){
		if (minusarr[minusi]>0){
			for (; minusi < numberofarr - 1; minusi++){
				if (minusarr[minusi] < 0){
					
					if (count != 0){
						if (width < minusi - templeft+1){
							outputright = minusi;
							width = outputright - templeft + 1;
							outputleft = templeft;
							if (half != 0){
								count = 1;
								templeft = half;
								half = minusi;
							}
							else{
								count = 0;
								outputleft = templeft;
								templeft = minusi;
							}
							break;
						}
					}
					else{
						count++;
						half = minusi;
						//minusi++;
						break;
					}
				}
				else if (minusi == numberofarr - 2){
					if (count != 0){
						if (width < minusi - templeft+2){
							outputright = minusi+1;
							width = outputright - templeft +1;
							count = 0;
							outputleft = templeft;
							//minusi++;
							templeft = minusi;
							//minusi--;
							continue;
						}
					
					}
					else{
						continue;
					}
				}
				else if (minusarr[minusi] == 0){
					if (count != 0){
						if (width < minusi - templeft + 1){
							outputright = minusi;
							width = outputright - templeft + 1;
							if (half != 0){
								count = 0;
								outputleft = templeft;
								//templeft = minusi + 1;
								half = 0;
							}
							else{
								count = 0;
								outputleft = templeft;
								templeft = minusi;
							}

							break;
						}
					}
					else{

						half = 0;
						templeft = minusi + 1;
						//minusi++;
						break;
					}
				}
				
			}//for循环
			continue;
		}//if (minusarr[minusi]>0)
		else if (minusarr[minusi] < 0){
			for (; minusi<numberofarr - 1; minusi++){
				if (minusarr[minusi]>0 ){
					if (count != 0){
						if (width < minusi - templeft+1){
							outputright = minusi ;
							width = outputright - templeft+1;
							if (half != 0){
								count = 1;
								outputleft = templeft;
								templeft = half;
								half = minusi ;
							}
							else{
								count = 0;
								outputleft = templeft;
								templeft = minusi;
							}
							
							//minusi++;
							//minusi--;
							break;
						}
					}
					else{
						count++;
						half = minusi ;
						//minusi++;
						break;
					}
					
				}
				else if (minusi == numberofarr - 2){
					if (count != 0){
						if (width < minusi - templeft+2){
							outputright = minusi+1;
							width = outputright - templeft + 1;
							count = 0;
							outputleft = templeft;
							//minusi++;
							templeft = minusi;
							//minusi--;
							continue;
						}

					}
					else{
						continue;
					}
				}
				else if (minusarr[minusi]==0){
					if (count != 0){
						if (width < minusi - templeft + 1){
							outputright = minusi;
							width = outputright - templeft + 1;
							if (half != 0){
								count = 0;
								outputleft = templeft;
								//templeft = minusi+1;
								half =0;
							}
							else{
								count = 0;
								
								templeft = minusi;
								outputleft = templeft;
							}

							//minusi++;
							//minusi--;
							break;
						}
					}
					else{
						
						half = 0;
						templeft = minusi + 1;
						//minusi++;
						break;
					}
				}
				
			}
			continue;
		}
		else if (minusarr[minusi] == 0){
			if (count == 0){
				templeft = minusi + 1;
				minusi++;
				//minusi++;
				continue;
			}
			else{
				templeft = minusi + 1;
				count = 0;
				half = 0;
				minusi++;
				continue;
			}

		}
		//minusi++;
	}//while
	
	cout << "width: " << width << endl;
	cout << "qujian: " << "["<<outputleft <<","<< outputright<<"]" << endl;
	system("pause");
	return 0;
}