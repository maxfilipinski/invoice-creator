#pragma once
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <vector>
#include <iomanip>
#include <ctime>
#include "create_invoice.h"

void createInvoice(
	const std::string date, 
	const std::string& numberOfHours,
	const std::string& rate,
	const std::string& service,
	const std::string& pkwiuCode,
	const std::string& paymentDate)
{
	std::string templateInvoicePath = "C:\\Users\\maksymilian.filipins\\Desktop\\invoice_template.txt";
	std::string resultInvoicePath = "C:\\Users\\maksymilian.filipins\\Desktop\\invoice_" + date + ".txt";

	std::vector<std::string> searchWords = { "#data", "#iloscgodzin", "#stawka", "#usluga", "#kodpkwiu", "#terminplatnosci" };
	std::vector<std::string> replaceWords = { date, numberOfHours, rate, service, pkwiuCode, paymentDate };

	std::ifstream inputFile{ templateInvoicePath };
	std::ofstream outputFile{ resultInvoicePath };

	if (!inputFile.is_open())
	{
		std::cerr << "Could not open invoice_template.txt for reading.\n";
	}

	if (!outputFile.is_open())
	{
		std::cerr << "Could not open invoice.txt for writing.\n";
	}

	int counter = 0;
	std::string line;
	std::string searchWord;
	std::string replaceWord;
	
	while (std::getline(inputFile, line))
	{
		for (int i = 0; i < searchWords.size(); i++)
		{
			std::string searchWord = searchWords[i];
			std::string replaceWord = replaceWords[i];
			size_t position = line.find(searchWord);

			while (position != std::string::npos)
			{
				line.replace(position, searchWord.length(), replaceWord);
				position = line.find(searchWord, position + replaceWord.length());
			}
		}

		outputFile << line << '\n';
	}

	inputFile.close();
	outputFile.close();
}