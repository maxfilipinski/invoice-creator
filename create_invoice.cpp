#include "create_invoice.h"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <vector>
#include <iomanip>
#include <ctime>

void replaceAll(std::string& line, const std::string& from, const std::string& to)
{
	size_t wordStartPosition = 0;
	while ((wordStartPosition = line.find(from, wordStartPosition)) != std::string::npos)
	{
		line.replace(wordStartPosition, from.length(), to);
		wordStartPosition += to.length();
	}
}

void createInvoice(
	const std::string& date,
	const std::string& numberOfHours,
	const std::string& rate,
	const std::string& service,
	const std::string& pkwiuCode,
	const std::string& paymentDate)
{
	std::string templateInvoicePath = "PATH_TO_FILE";
	std::string resultInvoicePath = "PATH_TO_RESULT_FILE" + date + ".txt";

	std::vector<std::string> searchWords = { "#data", "#iloscgodzin", "#stawka", "#usluga", "#kodpkwiu", "#terminplatnosci" };
	std::vector<std::string> replaceWords = { date, numberOfHours, rate, service, pkwiuCode, paymentDate };

	std::ifstream inputFile{ templateInvoicePath };
	std::ofstream outputFile{ resultInvoicePath };

	if (!inputFile.is_open())
	{
		std::cerr << "Could not open " << templateInvoicePath << " for reading.\n";
		return;
	}

	if (!outputFile.is_open())
	{
		std::cerr << "Could not open " << resultInvoicePath << " for writing.\n";
		return;
	}

	std::string line;
	while (std::getline(inputFile, line))
	{
		for (size_t i = 0; i < searchWords.size(); i++)
		{
			replaceAll(line, searchWords[i], replaceWords[i]);
		}

		outputFile << line << '\n';
	}

	inputFile.close();
	outputFile.close();
}