#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdio>

int main()
{
	int age;
	std::cout<< "input age" <<std::endl;
	std::cin >> age;

	char job_c[30];
	std::cout << "input job" <<std::endl;
	std::cin >> job_c;

	std::string name_cpp;
	std::cout << "input name" <<std::endl;
	std::cin >> name_cpp;

	std::cout << "age : "<<age<<std::endl;
	std::cout << "job : "<<job_c<<std::endl;
	std::cout << "name : "<<name_cpp<<std::endl;

	return 0;
}