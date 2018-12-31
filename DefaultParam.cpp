#include <iostream>
#include <stdio.h>
using namespace std;

int test(int a=10);

int main()
{
	cout<<test()<<endl;
	cout<<test(20)<<endl;
	return 0;
}
int test(int a)
{
	return a;
}