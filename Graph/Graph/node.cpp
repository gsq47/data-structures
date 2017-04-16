#include"node.h"
#include<stdio.h>
using namespace std;
Cnode::Cnode(){
	
	isVisited = false;
}
Cnode::Cnode(int nodevalue){

	value = nodevalue;
	isVisited = false;
}