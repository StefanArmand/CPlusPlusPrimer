#include <iostream>
#include <string>
#include "Main.h"

using namespace std;

Sales_data& Sales_data::combine(const Sales_data &rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

int main()
{
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold) {
		Sales_data trans;
		int totalrev = 0;
		while (cin >> trans.bookNo >> trans.units_sold) {
			if (total.bookNo == trans.bookNo) {
				int totnumbsold = (total.revenue * total.units_sold);
				totnumbsold += trans.revenue * trans.units_sold;
				totalrev += totnumbsold;
				total.combine(trans);
			}
			else {
				cout << "Revenue: " << totalrev << endl;
				cout << "Units sold: "<<total.units_sold << endl;
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