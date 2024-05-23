#pragma once

#include <string>

/**
* @brief Creates an invoice with the given parameters.
*
* @param date The date of the invoice
* @param numberOfHours The number of hours worked
* @param rate The rate per hour
* @param service The name of the service provided
* @param pkwiuCode The PKWiU code for the service
* @param paymentDate The payment date for the invoice
*/
void createInvoice(
	const std::string& date,
	const std::string& numberOfHours,
	const std::string& rate,
	const std::string& service,
	const std::string& pkwiuCode,
	const std::string& paymentDate);