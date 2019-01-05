#include <iostream>
#include <stdio.h>
using namespace std;

class user
{
public:
	int age;
	char name[32];

	void print(void)
	{
		printf("%d , %s\n",age,name );
	}
};
int main()
{
	user song= {10,"miranda"};
	song.print();

	return 0;
}
