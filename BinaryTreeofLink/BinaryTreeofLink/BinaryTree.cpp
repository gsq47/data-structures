#include"BinaryTree.h"
#include<stdlib.h>
#include<iostream>

using namespace std;
BinaryTree::BinaryTree(){
	TreeRoot = new Node();
}
BinaryTree::~BinaryTree(){
	TreeRoot->DeleteNode();
}
void BinaryTree::CreateTree(int parentindex, int rightorleft, Node* node){

	TreeRoot->AddNode(parentindex, rightorleft, node);
}

void BinaryTree::AddTreeNode(int parentindex, int rightorleft, Node* newnode){
	TreeRoot->AddNode(parentindex, rightorleft, newnode);
}
void BinaryTree::DeleteTreeNode(int index){
	if (!TreeRoot->FindNode(index)){
		cout << "no this node" << endl;
	}
	else{
		TreeRoot->FindNode(index)->DeleteNode();
	}
}
void BinaryTree::FindTreeNode(int index){
	
	Node * findnode = TreeRoot->FindNode(index);
	
}
void BinaryTree::PreTransverse(){
	TreeRoot->PreTransverse(TreeRoot);
}
void BinaryTree::InorderTransverse(){

	TreeRoot->InorderTransverse(TreeRoot);
}
void BinaryTree::PostTransverse(){

	TreeRoot->PostTransverse(TreeRoot);
}