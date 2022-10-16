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

	std::cout << std::setw(25) << _data << std::setw(25) << "1 USD" << std::setw(15) << tempUSDPLN << std::setw(15) << tempPLNUSD << std::endl;
	std::cout << std::endl;
}
