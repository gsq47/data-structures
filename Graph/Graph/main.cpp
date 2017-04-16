#include"Map.h"
//#include"node.h"
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){

	Cnode node0(0);
	Cnode node1(1);
	Cnode node2(2);
	Cnode node3(3);
	Cnode node4(4);
	Cnode node5(5);
	Cnode node6(6);
	Cnode node7(7);
	CMap map(8);
	map.CreateGraphArray(&node0);
	map.CreateGraphArray(&node1);
	map.CreateGraphArray(&node2);
	map.CreateGraphArray(&node3);
	map.CreateGraphArray(&node4);
	map.CreateGraphArray(&node5);
	map.CreateGraphArray(&node6);
	map.CreateGraphArray(&node7);
	map.CreateCMap(0, 1);
	map.CreateCMap(0, 2);
	map.CreateCMap(1, 3);
	map.CreateCMap(1, 4);
	map.CreateCMap(2, 5);
	map.CreateCMap(5, 7);
	map.CreateCMap(6, 7);
	map.CreateCMap(2, 6);
	map.CreateCMap(3, 4);
	map.outputMap();
	map.DeepTraverse(&node0);
	cout << "wide traverse" << endl;
	map.InitNode();
	map.wideTraverse(&node0);
	system("pause");
	return 0;
}