#include"Node.h";
#include<stdio.h>;
#include<iostream>;
using namespace std;

class BinaryTree{
public:
	BinaryTree();
	~BinaryTree();
	//创建树
	void CreateTree(int parentindex, int rightorleft, Node* node);
	
	//插入节点
	void AddTreeNode(int parentindex, int rightorleft, Node* newnode);
	//删除节点
	void DeleteTreeNode(int index);
	//查找结点
	void FindTreeNode(int index);
	//前序遍历
	void PreTransverse();
	//中序遍历
	void InorderTransverse();
	//后序遍历
	void PostTransverse();

private:
	Node* TreeRoot;

};