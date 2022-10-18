#pragma once
#include <string>
#include <vector>
#include "DataBase.hpp"

struct Currency
{
	std::string name;
	std::string currencyCode;
	double currencyRateBuy;
	double currencyRateSell;
};

class DataToDisplay
{
private:
	DataBase dataBase;
	std::vector<Currency> vectorOfCurrencies;
	std::vector <std::string> currencyNames = { "dolar amerykański", "dolar australijski", "dolar kanadyjski", "euro", "forint (Węgry)", "frank szwajcarski", "funt szterling", "jen (Japonia)", "korona czeska", "korona duńska", "korona norweska", "korona szwedzka", "SDR (MFW)" };
	std::vector <std::string> currencyID = { "USD", "AUD", "CAD", "EUR", "HUF", "CHF", "GBP", "JPY", "CZK", "DKK", "NOK", "SEK", "XDR"};
public:
	DataToDisplay();
	std::vector<Currency> getVectorOfCurrencies();
};
