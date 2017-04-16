/*
#include<stdlib.h>
#include<iostream>
using namespace std;
class A{
	int m;
public:
	A(int aa, int bb){
		a = aa--;
		b = a*bb;
	}
	void get(){
		cout << a << endl;
		cout << b << endl;
	}
private:
	int a;
	int b;
};
int main(){
	A a(4, 5);
	a.get();
	a.m = 3;
	system("pause");
	/*
	int n[][3] = { 10, 20, 30, 40, 50, 60 };
	int(*p)[3];
	p = n;
	if (p == n) cout << "hi" << endl;
	
	cout << p << endl;
	cout << n << endl;
	cout << p[0] << endl;
	cout << p[0] + 1 << endl;
	cout << p[1] << endl;
	cout << *p[1] << endl;
	cout << *p[2] << endl;
	cout << n[1][0] << endl;
	cout << p[0][0] << "," << *(p[0] + 1) << "," << (*p)[2] << endl;
	system("pause");
	return 0;
	*/
//}