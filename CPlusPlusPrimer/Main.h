#pragma once
#ifndef MAIN_H
#define MAIN_H
#include <string>

struct Sales_data {
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 5.0;
};
#endif
