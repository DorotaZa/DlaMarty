#include "Cashier.hpp"
#include <iostream>



void Cashier::displayCurrencyRateTable()
{
	std::cout << std::endl;
	std::cout << std::setw(25) << "---------------------------------------------------------------------------------" << std::endl;
	std::cout << std::setw(40) << "CURRENCY" << std::setw(5) << "RATE" << std::setw(35) << std::endl;
	std::cout << std::setw(25) << "---------------------------------------------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << std::setw(25) << "Nazwa waluty" << std::setw(25) << "Kod Waluty" << std::setw(20) << "Kurs:" << std::endl;
	std::cout << std::endl;
	std::cout << std::setw(65) << "Kupna" << std::setw(15) << "Sprzedaży" << std::endl;
	std::cout << std::endl;
	std::cout << std::setw(25) << "---------------------------------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < _data.getVectorOfCurrencies().size(); ++i)
	{
		std::cout << std::setw(25) << _data.getVectorOfCurrencies().at(i).name << std::setw(25) << _data.getVectorOfCurrencies().at(i).currencyCode << std::setw(15) << _data.getVectorOfCurrencies().at(i).currencyRateBuy << std::setw(15) << _data.getVectorOfCurrencies().at(i).currencyRateSell << std::endl;
		std::cout << std::endl;

	}
	
}
