#include <iostream>
#include <stdio.h>
using namespace std;

class DATA
{
	int private_;

public:
	int getdata(){return private_;}
	int setdata(int n){return private_=n;}
};
int main()
{
	DATA data;
	data.setdata(10);
	cout<<data.getdata()<<endl;
	//cout<<data.private_<<endl;  error!
	return 0;
}
