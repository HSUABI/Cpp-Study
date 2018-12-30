#include <iostream>
#include <stdio.h>

int main()
{
	int *a = new int;
	int *b = new int(10);

	*a=5;
	std::cout<< *a<<std::endl;
	std::cout<< *b<<std::endl;

	delete a;
	delete b;
	return 0;
}