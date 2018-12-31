#include <iostream>
#include <stdio.h>
using namespace std;


namespace TEST
{
	namespace EOL
	{
		int child=200;
	}
	int data=100;
	void test()
	{
		cout<<"Namespace test() : "<<endl;
	}
}


using namespace TEST;
using namespace EOL;



int main()
{

	test();
	cout<< data <<endl;
	cout<< child <<endl;
	
	return 0;
}
