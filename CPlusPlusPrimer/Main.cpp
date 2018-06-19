#include <iostream>
#include <string>
#include "Main.h"

using namespace std;

istream & read(istream &is, Person &item) {
	is >> item.name >> item.address >> price;
	return is;
}

ostream &print(ostream &os, const Person &item) {
	os << item.returnname() << " " << item.returnaddress << endl;
	return os;
}

int main()
{

}