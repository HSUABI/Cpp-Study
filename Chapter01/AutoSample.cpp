#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdio>

int main()
{
	int a(10);
	int b(a);
	auto c(b);
	std::cout <<a+b+c<<std::endl;
	return 0;
}