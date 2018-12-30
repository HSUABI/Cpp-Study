#include <iostream>
#include <stdio.h>

using namespace std;

int test(int a)
{
	return a*2;
}

int main()
{
	int arr[5]={1,2,3,4,5};

	for(int i=0;i<5;i++)
		cout<<arr[i]<<" ";
	cout<<endl;

	for(auto i : arr)
		cout<<i<<" ";
	cout<<endl;

	for(auto &i : arr)
		cout<<i<<" ";
	cout<<endl;


	return 0;
}