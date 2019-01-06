#include <iostream>
#include <stdio.h>
using namespace std;

class test
{
public:
	int cdata;
	int a=10;
	int b=20;
	test(int n): cdata(n)
	{
		cout<<"생성자"<<endl;
	}
	~test()
	{
		cout<<"소 멸 자"<<cdata<<endl;
	}
};


int main()
{
	test song(1);
	test young(4);
	cout<<"song"<<song.cdata<<endl;
	cout<<"young"<<young.cdata<<endl;
	cout<<"young-a "<<young.a<<endl;

	return 0;
}
