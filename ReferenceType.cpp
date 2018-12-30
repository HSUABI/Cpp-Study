#include <iostream>
#include <stdio.h>

using namespace std;

/*
new 는 malloc과 유사 
하지만 new는 객체 생성자를 호출함
delete는 객체 소멸자를 호출함
*/
int main()
{
	int data=10;
	int &ref=data;

	ref=20;
	cout<<data<<endl;

	int *p =&data;
	*p=30;
	cout<<data<<endl;
	return 0;
}