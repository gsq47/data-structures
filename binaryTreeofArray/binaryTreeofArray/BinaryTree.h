#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class BinaryTree{
public :
	BinaryTree(int TreeSize,int* root);//创建树
	~BinaryTree();//销毁树
	//根据索引查找树
	int* FindNode(int index);
	//删除节点
	bool DeleteNode(int index,int& del);
	//添加节点
	bool AddNode(int parentIndex, int rightorleft, int value);
	//二叉树遍历
	void BTreeTransverse();
private:
	int *m_Tree;
	int Size;
};