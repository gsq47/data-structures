#include"Map.h"
#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
CMap::CMap(int capacity){
	MaxCapacity = capacity;
	havenode = 0;
	GraphArray = new Cnode[MaxCapacity];
	CGMap = new int[MaxCapacity*MaxCapacity];
	memset(CGMap, 0, MaxCapacity*MaxCapacity*sizeof(int));
}
CMap::~CMap(){
	delete[]GraphArray;
}
void CMap::CreateGraphArray(Cnode *a){

	if (!a){
		return;
	}
	if (havenode < MaxCapacity){
		GraphArray[havenode] = *a;
		GraphArray[havenode].isVisited = false;
		havenode++;
	}
}
void CMap::CreateCMap(int row, int col){
	if (row < 0 || row >= MaxCapacity || col < 0 || col >= MaxCapacity){
		return;
	}
	CGMap[row*MaxCapacity + col] = 1;
	
}
void CMap::InitNode(){
	if (havenode <= 0){
		return;
	}
	for (int i = 0; i < havenode; i++){
		GraphArray[i].isVisited = false;
	}
}
void CMap::outputMap(){
	for (int i = 0; i < MaxCapacity; i++){
		for (int j = 0; j < MaxCapacity; j++){
			cout << CGMap[i*MaxCapacity + j] << " ";

		}
		cout << endl;
	}
}
void CMap::DeepTraverse(Cnode* root){
	int index = 0;
	if (havenode <= 0){
		return;
	}
	for (int i = 0; i < havenode; i++){
		if (&GraphArray[i] == root){
			index = i;
		}
	}
		cout << GraphArray[index].value << endl;
		GraphArray[index].isVisited = true;
	
		for (int j = 0; j < MaxCapacity; j++){
			if (CGMap[index*MaxCapacity + j] != 0){
				if (GraphArray[j].isVisited == false){
					DeepTraverse(&GraphArray[j]);
				}
			}
		}
}
queue<Cnode*> waitfortraverse;
void CMap::wideTraverse(Cnode * root){
	int index = 0;
	if (havenode <= 0){
		return;
	}
	for (int i = 0; i < havenode; i++){
		if (&GraphArray[i] == root){
			index = i;
		}
	}
	if (GraphArray[index].isVisited == false){
		cout << GraphArray[index].value << endl;
		GraphArray[index].isVisited = true;
	}
	
	
	for (int j = 0; j < MaxCapacity; j++){
		if (CGMap[index*MaxCapacity + j] != 0){
			if (GraphArray[j].isVisited == false){
				waitfortraverse.push(&GraphArray[j]);
			}
		}
	}
	Cnode* temp = NULL;
	if (waitfortraverse.size()>0){
		temp = waitfortraverse.front();
		waitfortraverse.pop();
	}
	if (temp != NULL){
		if (temp->isVisited == true){
			if (waitfortraverse.size() > 0){
				temp = waitfortraverse.front();
				waitfortraverse.pop();
			}
		}
	}
	if (temp != NULL){

		wideTraverse(temp);
	}
	
	//wideTraverse(*waitfortraverse.pop());
}