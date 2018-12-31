#include <iostream>
#include <stdio.h>
using namespace std;

template <typename t>
t test(t a , t b)
{
	return a+b;
}


int main()
{

	cout<<test(5,4)<<endl;
	cout<<test<int>(5.5,2.2)<<endl;
	cout<<test(5.5,2.2)<<endl;
	
	return 0;
}
