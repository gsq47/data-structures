#include"Node.h";
#include<stdio.h>;
#include<iostream>;
using namespace std;

class BinaryTree{
public:
	BinaryTree();
	~BinaryTree();
	//������
	void CreateTree(int parentindex, int rightorleft, Node* node);
	
	//����ڵ�
	void AddTreeNode(int parentindex, int rightorleft, Node* newnode);
	//ɾ���ڵ�
	void DeleteTreeNode(int index);
	//���ҽ��
	void FindTreeNode(int index);
	//ǰ�����
	void PreTransverse();
	//�������
	void InorderTransverse();
	//�������
	void PostTransverse();

private:
	Node* TreeRoot;

};