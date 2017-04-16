#include<stdio.h>
class Node{
public :
	Node();
	Node(int value, int index);
	~Node();
	bool AddNode(int parentindex,int rightorleft,Node* node);
	
	void DeleteNode();
	Node* FindNode(int findindex);
	void PreTransverse(Node *root);
	void InorderTransverse(Node *root);
	void PostTransverse(Node *root);
private:
	int data;
	int index;
	Node* parent;
	Node* PLlink;
	Node* PRlink;

};