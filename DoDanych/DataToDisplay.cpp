#include "DataToDisplay.hpp"
#include <iostream>

DataToDisplay::DataToDisplay()
{
	/*for (auto it = vectorOfCurrencies.begin(); it != vectorOfCurrencies.end(); ++it)
	{
		(*it).name
	}*/

	std::cout << "Constructor data to display" << std::endl;
	for (int i = 0; i < vectorOfCurrencies.size(); ++i)
	{
		vectorOfCurrencies.at(i).name = currencyNames.at(i);
		vectorOfCurrencies.at(i).currencyCode = currencyID.at(i);

		std::string strBuy = vectorOfCurrencies.at(i).currencyCode + "PLN";
		vectorOfCurrencies.at(i).currencyRateBuy = dataBase.getMapOfCurrencies().at(strBuy);

		std::string strSell = "PLN" + vectorOfCurrencies.at(i).currencyCode;
		vectorOfCurrencies.at(i).currencyRateSell = dataBase.getMapOfCurrencies().at(strSell);
	}
}

std::vector<Currency> DataToDisplay::getVectorOfCurrencies()
{
	return vectorOfCurrencies;
}
