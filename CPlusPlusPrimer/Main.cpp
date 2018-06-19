#include <iostream>
#include <string>
#include "Main.h"

using namespace std;

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
	Sales_data sum = lhs;
	&sum.combine(rhs);
	return sum;
}

Sales_data& Sales_data::combine(const Sales_data &rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

istream & read(istream &is, Sales_data &item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream &print(ostream &os, const Sales_data &item) {
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << endl;
	return os;
}

int main()
{
	//exercise 7.11
	Sales_data d1;
	Sales_data d2("5432534gfd");
	Sales_data d3("5432534gfd", 5, 2.5);
	Sales_data d4(cin);
	Sales_data total (cin);
	if (cin) {
		Sales_data trans (cin);
		while (cin) {
			//Sales_data sum;
			if (total.bookNo == trans.bookNo) {
				total.combine(trans);
			}
			else {
				print(cout, total);
				total = trans;
			}
			read(cin, trans);
		}
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
	cout << total.revenue << endl;
	

	system("pause");

}