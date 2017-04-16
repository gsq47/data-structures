/*
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int a(){
	return 3;
}
int b(){
	return 6;
}
void f(char *x){
	x++;
	*x = 'a';
}
void function(int a[]){
	char *pa = (char*)(a + 1);
	int nSum = sizeof(a);
	cout << "sizeof(a): " << nSum << endl;
	nSum += sizeof(pa);
	cout << "sizeof(pa): " << nSum << endl;
	nSum += int(pa) - int(a);
	cout << "int(pa)" << int(pa) << endl;
	cout << "int(*pa)" << int(*pa) << endl;
	cout << "int(a)" << int(a) << endl;
	cout << "int(*a)" << int(*a) << endl;
	cout << "int(pa)-int(a): " << nSum << endl;
	cout << nSum << endl;
}
char* f(char *str, char ch){
	char *it1 = str;
	char *it2 = str;
	while (*it2 != '\0'){
		while (*it2 == ch){
			it2++;
		}
		*it1++ = *it2++;
	}
	return str;
}
int main(){

	int(*ptr[2])();
	ptr[0] = a;
	ptr[1] = b;
	cout << sizeof(int) << endl;
	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(char) << endl;
	char str[sizeof("abcdcccd")];
	strcpy_s(str, "hello");
	f(str, 'c');
	//f(str);
	//cout << str << endl;
	//cout << ptr[0] << endl;
	//cout << &a << endl;
	unsigned char a = 2;
	int count = 0;
	cout << sizeof(unsigned char) << endl;
	while (a > 0){
		a = a - 5;
		count++;
	}
	//cout << count << endl;
	int ar[10] = { 1, 2, 3, 4, 5 };
	//function(ar);
	char *m = new char[10];
	//char m[sizeof("abcdcccd")];
	//strcpy_s(*m, "abcdcccd");
	//cout << f(m, 'c') << endl;
	int k[] = { 1, 2, 3, 4, 5 };
	int *p[] = { k, k + 1, k + 2, k + 3 };
	int** q = p;
	cout << *(p[0] + 1) + **(q + 2) << endl;
	system("pause");
}
*/