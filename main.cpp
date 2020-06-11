#include <iostream>
#include <string>
#include <stdio.h>

#include "Encrypt.h"

int main(int argc, char* argv[])
{
	int size = 0;

	char source[] = "DataSecurity";
	char pass[] = "CN007";
	char* result1 = NULL;
	char* result2 = NULL;

	std::cout << "Please input plaintext: ";
	std::cin >> source;
	std::cout << "Please input key: ";
	std::cin >> pass;

	result1 = Encrypt(source, pass);

	printf("Here is the ciphertext: %s\n", result1);
	
	delete[]result1;
	delete[]result2;
	system("pause");
	return 0;
}