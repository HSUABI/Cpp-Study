#include <iostream>
#include <stdio.h>
using namespace std;

class test
{
public:
	test()
	{
		cout<<"생성자"<<endl;
	}
	int a=10;
	int b=20;

	~test()
	{
		cout<<"소 멸 자"<<endl;
	}
};


int main()
{
	test song;
	cout<<song.a<<endl;

	return 0;
}
