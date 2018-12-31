#include <iostream>
#include <stdio.h>
using namespace std;

int test(int a=10)
{
	return a;
}
int main()
{
	cout<<test()<<endl;
	cout<<test(20)<<endl;
	return 0;
}