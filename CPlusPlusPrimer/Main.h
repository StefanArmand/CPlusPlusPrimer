#pragma once
#ifndef MAIN_H
#define MAIN_H
#include <string>

struct Person {
	Person() = default;
	Person(const std::string adr) : address(adr) {}
	Person(const std::string adr, const std::string n) : address(adr), name(n) {}
	std::string returnname() const { return name; }
	std::string returnaddress() const { return address; }
	friend std::istream &read(std::istream &, Person &);

private:
	std::string name;
	std::string address;
};

std::istream & read(std::istream &, Person &);

#endif