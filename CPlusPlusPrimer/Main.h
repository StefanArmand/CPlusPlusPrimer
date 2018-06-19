#pragma once
#ifndef MAIN_H
#define MAIN_H
#include <string>

struct Person {
	std::string returnname() const { return name; }
	std::string returnaddress() const { return address; }
	std::string name;
	std::string address;
};

#endif