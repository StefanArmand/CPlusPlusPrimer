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
	Sales_data total;
	if (read(cin, total)) {
		Sales_data trans;
		while (read( cin, trans)) {
			//Sales_data sum;
			if (total.bookNo == trans.bookNo) {
				total.combine(trans);
			}
			else {
				print(cout, total);
				total = trans;
			}
		}
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
	cout << total.revenue << endl;
	

	system("pause");

}