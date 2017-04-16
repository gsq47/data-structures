#include"BinaryTree.h"
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){

	BinaryTree *treeroot = new BinaryTree();
	Node *node1 = new Node(5,1);
	Node *node2 = new Node(8, 2);
	Node *node3 = new Node(2, 3);
	Node *node4 = new Node(6, 4);
	Node *node5 = new Node(9, 5);
	Node *node6 = new Node(7, 6);
	
	treeroot->CreateTree(0, 0, node1);
	treeroot->CreateTree(0, 1, node2);
	treeroot->CreateTree(1, 0, node3);
	treeroot->CreateTree(1, 1, node4);
	treeroot->CreateTree(2, 0, node5);
	treeroot->CreateTree(2, 1, node6);
	treeroot->PreTransverse();
	cout << endl;
	treeroot->InorderTransverse();
	cout << endl;
	treeroot->PostTransverse();
	cout << endl;
	treeroot->DeleteTreeNode(1);
	treeroot->PreTransverse();
	cout << endl;
	treeroot->DeleteTreeNode(0);
	treeroot->PreTransverse();
	cout << endl;
	system("pause");
	return 0;
}