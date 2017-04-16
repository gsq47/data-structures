#include"node.h"
class CMap{
public:
	CMap(int capacity);
	~CMap();
	void CreateGraphArray(Cnode *a);
	void CreateCMap(int row,int col);
	void InitNode();
	void DeepTraverse(Cnode * root);
	void wideTraverse(Cnode * root);
	void outputMap();
	Cnode *GraphArray;
	int MaxCapacity;
	int havenode;
	int* CGMap;
};