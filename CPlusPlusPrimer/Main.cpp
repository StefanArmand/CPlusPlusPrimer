#include <iostream>
#include <string>
#include "Main.h"

using namespace std;

inline Screen &Screen::move(pos r, pos c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}
char Screen::get(pos r, pos c) const {
	pos row = r * width;
	return contents[row + c];
}

void Screen::some_member() const {
	++access_ctr;
}

inline Screen &Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch) {
	contents[r*width + col] = ch;
	return *this;
}

void Window_mgr::clear(ScreenIndex i) {
	Screen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}

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

	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";

	if (cin) {
		Sales_data trans (cin);
		while (cin) {
			//Sales_data sum;
			if (total.isbn() == trans.isbn()) {
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
	

	system("pause");

}