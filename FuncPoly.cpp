#include <iostream>
#include <stdio.h>
using namespace std;

int Add(int a,int b,int c)
{
	return a+b+c;
}

int Add(int a,int b)
{
	return a+b;
}

double Add(double a,double b)
{
	return a+b;
}

int main()
{

	cout<<Add(3,4,5)<<endl;
	cout<<Add(3,4)<<endl;
	cout<<Add(3.6,2.3)<<endl;
	return 0;
}
