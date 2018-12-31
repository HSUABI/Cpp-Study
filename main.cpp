#include <iostream>
#include <stdio.h>
using namespace std;

int test(int a, int b=2);

int main()
{
	cout<<test(2)<<endl;
	cout<<test(2,5)<<endl;
	return 0;
}
int test(int a,int b)
{
	return a*b;
}