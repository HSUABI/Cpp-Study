#include <iostream>
#include <stdio.h>
using namespace std;


namespace TEST
{
	int data=100;
	void test()
	{
		cout<<"Namespace test() : "<<endl;
	}
}


using namespace TEST;



int main()
{

	test();
	cout<<data<<endl;
	
	return 0;
}
