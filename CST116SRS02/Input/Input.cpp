// Input.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

int main()
{
	float number;
	std::cout << "enter number: ";
	std::cin >> number;
	std::cout << std::scientific << number << std::endl;

    return 0;
}

