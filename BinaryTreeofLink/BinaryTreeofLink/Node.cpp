#include"Node.h"
#include<stdlib.h>
#include<iostream>
using namespace std;
Node::Node(){
	
	this->data = 0;
	this->index = 0;
	this->parent = NULL;
	this->PLlink = NULL;
	this->PRlink = NULL;
}
Node::Node(int value, int index){
	this->data = value;
	this->index = index;
	this->parent = NULL;
	this->PLlink = NULL;
	this->PRlink = NULL;
}
Node::~Node(){
	delete this;
	//this = NULL;
}
Node* Node::FindNode(int findindex){
	if (findindex < 0){
		cout << "wrong index" << endl;
		return NULL;
	}
	if (this!=NULL){
		if (this->index == findindex){
			return this;
		}
		else if (PLlink->FindNode(findindex) != NULL){
				return PLlink;
			}
		else if (PRlink->FindNode(findindex) != NULL){
					return PRlink;
				}
		else return NULL;
				
			}
			
		}
	
	
bool Node::AddNode(int parentindex, int rightorleft, Node* node){
	Node* parent;
	if (!FindNode(parentindex)){
		return false;
	}
	parent = FindNode(parentindex);
	if (rightorleft == 0){

		if (parent->PLlink) return false;
		else{ parent->PLlink = node; node->parent = parent; }

	}
	if (rightorleft == 1){

		if (parent->PRlink) return false;
		else{ parent->PRlink = node; node->parent = parent; }
	}
	return true;

}
void Node::DeleteNode(){
	if (PLlink){
		PLlink->DeleteNode();
	}
	if (PRlink){
		PRlink->DeleteNode();
	}
	if (this->parent){
		if (this->parent->PLlink == this){
			this->parent->PLlink = NULL;
		}
		else{
			this->parent->PRlink = NULL;
		}
	}
	//delete this;
	
}
void Node::PreTransverse(Node* root){

	if (root){
		cout << root->data<<" " ;
	}
	if (root->PLlink){
		PreTransverse(root->PLlink);
	}
	if (root->PRlink){
		PreTransverse(root->PRlink);
	}
	
}
void Node::InorderTransverse(Node* root){
	if (root){
		if (root->PLlink)
		InorderTransverse(root->PLlink);
	}
	cout << root->data << " ";
	if (root->PRlink)
	InorderTransverse(root->PRlink);
}
void Node::PostTransverse(Node *root){
	if (root){
		if (root->PLlink)
		PostTransverse(root->PLlink);
	}
	if (root->PRlink)
	PostTransverse(root->PRlink);
	cout << root->data << " ";
	
}