// Output.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"

int main()
{
	float West = 36364.87;
	float Midwest = 12431.33;
	float East = 127690.50;
	float South = 9200.00;

	std::cout.imbue(std::locale("en-US"));
	std::cout << std::setw(10) << "West: " << " $" << std::setw(10) << std::fixed << std::setprecision(2) << West << "\n";
	std::cout << std::setw(10) << "Midwest: " << " $" << std::setw(10) << std::fixed << std::setprecision(2) << Midwest << "\n";
	std::cout << std::setw(10) << "East: " << " $" << std::setw(10) << std::fixed << std::setprecision(2) << East << "\n";
	std::cout << std::setw(10) << "South: " << " $" << std::setw(10) << std::fixed << std::setprecision(2) << South << "\n";

    return 0;
}

