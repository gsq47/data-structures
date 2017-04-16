#include"BinaryTree.h"
#include<stdio.h>
#include<iostream>
using namespace std;

BinaryTree::BinaryTree(int TreeSize, int* root){
	Size = TreeSize;

	m_Tree = new int[Size];
	for (int i = 0; i < Size; i++){
		m_Tree[i] = 0;
	}
	m_Tree[0] = *root;
}
BinaryTree::~BinaryTree(){
	delete[]m_Tree;
	m_Tree = NULL;
}
//根据索引查找树
int* BinaryTree::FindNode(int index){
	if (index < 0 || index >= Size){
		return NULL;
	}
	if (m_Tree[index] == 0){
		return NULL;
	}
	return &m_Tree[index];

}
//删除节点
bool BinaryTree::DeleteNode(int index,int &del){
	if (index < 0 || index >= Size){
		return false;
	}
	if (m_Tree[index] == 0){
		return false;
	}
	del = m_Tree[index];
	m_Tree[index] = 0;
}
//添加节点
bool BinaryTree::AddNode(int parentIndex, int rightorleft, int value){
	int insertIndex = 0;
	if (parentIndex < 0 || parentIndex >= Size){
		return false;
	}
	if (m_Tree[parentIndex] == 0){
		return false;
	}
	if (rightorleft == 0){
		insertIndex = 2 * parentIndex + 1;
	}
	else if (rightorleft == 1){
		insertIndex = 2 * parentIndex + 2;
	}
	if (insertIndex >= Size){
		return false;
	}
	if (m_Tree[insertIndex] != 0){
		return false;
	}
	m_Tree[insertIndex] = value;
}
//二叉树遍历
void BinaryTree::BTreeTransverse(){
	for (int i = 0; i < Size; i++){
		cout << m_Tree[i] << " ";
	}
	cout << endl;
}
int main(){
	int root = 3;
	int findnodevalue ;
	int dele;
	BinaryTree a(10, &root);
	a.AddNode(0, 0, 5);
	a.AddNode(0, 1, 8);
	a.AddNode(1, 0, 2);
	a.AddNode(1, 1, 6);
	a.AddNode(2, 0, 9);
	a.AddNode(2, 1, 7);
	a.BTreeTransverse();
	findnodevalue=*(a.FindNode(3));
	cout << findnodevalue << endl;
	a.DeleteNode(6,dele);
	cout << "delete :" << dele << endl;
	a.BTreeTransverse();
	system("pause");
}