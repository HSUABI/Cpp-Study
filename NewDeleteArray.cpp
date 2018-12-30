#include <iostream>
#include <stdio.h>

using namespace std;

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