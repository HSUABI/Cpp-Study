#include <iostream>
#include <stdio.h>
using namespace std;

class user
{
public:
	user(){}

	int age=10;
	char name[32]="song";

	void print(void)
	{
		printf("%d , %s\n",age,name );
	}
};
int main()
{
	user song;
	song.print();

	return 0;
}
