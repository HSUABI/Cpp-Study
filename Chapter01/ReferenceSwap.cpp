#include <iostream>
#include <stdio.h>

using namespace std;

/*
new 는 malloc과 유사 
하지만 new는 객체 생성자를 호출함
delete는 객체 소멸자를 호출함
*/
void swap(int &a, int&b)
{
	int temp=a;
	a=b;
	b=temp;
}

int main()
{
	int x(10),y(20);
	swap(x,y);
	cout<<"x : "<<x<<" y : "<<y<<endl;

	return 0;
}