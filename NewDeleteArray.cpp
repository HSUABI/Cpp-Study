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
	int *arr = new int[5];

	for(int i=0; i<5; i++)
		arr[i]= (i+1)*10; // 10 20 30 40 50

	for(int i=0; i<5; i++)
		cout << arr[i] <<endl;

	delete[] arr;
	return 0;
}