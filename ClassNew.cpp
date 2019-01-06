#include <iostream>
#include <stdio.h>
using namespace std;

class test
{
public:
	test()
	{
		cout<<"test()"<<endl;
	}
	~test()
	{
		cout<<"~test()"<<endl;
	}
};

int main()
{
	cout<<"begin"<<endl;
	test *p=new test;
	cout<<"after new"<<endl;
	delete p;
	cout<<"end"<<endl;

	cout<<endl<<"begin"<<endl;
	test *pp=new test[3];
	cout<<"after new"<<endl;
	delete []pp;
	cout<<"end"<<endl;
	return 0;
}
