#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class BinaryTree{
public :
	BinaryTree(int TreeSize,int* root);//������
	~BinaryTree();//������
	//��������������
	int* FindNode(int index);
	//ɾ���ڵ�
	bool DeleteNode(int index,int& del);
	//��ӽڵ�
	bool AddNode(int parentIndex, int rightorleft, int value);
	//����������
	void BTreeTransverse();
private:
	int *m_Tree;
	int Size;
};