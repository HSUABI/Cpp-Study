#include <iostream>
#include <stdio.h>
using namespace std;

template <typename t>
t test(t a)
{
	cout<<a<<endl;
	return a;
}


int main()
{

	cout<<test(5)<<endl;
	cout<<test(5.5)<<endl;
	cout<<test("a")<<endl;
	cout<<test("test")<<endl;
	return 0;
}
