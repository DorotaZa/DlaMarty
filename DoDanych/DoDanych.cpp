// DoDanych.cpp 

#include <iostream>
#include "Cashier.hpp"

int main()
{
	std::string word;
	std::cout << "Enter the polish word: " << std::endl;
	std::cin >> word;
	Cashier cashier;
	cashier.displayCurrencyRateTable();
}
