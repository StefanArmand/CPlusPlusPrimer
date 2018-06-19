#pragma once
#ifndef MAIN_H
#define MAIN_H
#include <string>

//istream &read(istream &, Sales_data &);
//ostream &print(ostream &, const Sales_data &);

struct Sales_data;
std::istream &read(std::istream &is, Sales_data &item);

struct Sales_data {
	Sales_data() : bookNo(""), units_sold(0), revenue(0.0) {}
	Sales_data(const std::string &s) : bookNo(s){}
	Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n){}
	Sales_data(std::istream &is) {
		read(is, *this);
	}

	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
#endif
