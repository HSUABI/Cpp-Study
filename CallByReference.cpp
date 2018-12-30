#include <iostream>
#include <stdio.h>

using namespace std;

/*
new 는 malloc과 유사 
하지만 new는 객체 생성자를 호출함
delete는 객체 소멸자를 호출함
*/
void test(int &ref)
{
	ref=100;
}

int main()
{
	int data=0;
	test(data);
	cout<<data<<endl;
	return 0;
}