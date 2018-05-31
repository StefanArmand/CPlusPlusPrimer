#include <iostream>
#include <string>
#include "Main.h"

using namespace std;

// ex 1.25

//Sales_item total;
//if (cin >> total) {
//	Sales_item trans;
//	while (cin >> trans) {
//		if (total.isbn() == trans.isbn()) {
//			total += trans;
//		}
//		else {
//			cout << total << endl;
//			total = trans;
//		}
//	}
//	cout << total << endl;
//}
//else {
//	cerr << "No data?!" << endl;
//	return -1;
//}
//
//return 0;


//Sales_item CurrItem, item;
//
//if (cin >> CurrItem) {
//    int cnt = 1;
//    while (cin >> item) {
//        if (CurrItem.isbn() == item.isbn()) {
//            cnt++;
//        }
//        else { cout << CurrItem << " occurs " << cnt << " times " << endl; 
//        CurrItem = item;
//        cnt = 1;
//        }
//    }
//    cout << CurrItem << " occurs " << cnt << " times " << endl;
//}

//Sales_item total;
//if (cin >> total) {
//	Sales_item trans;
//	while (cin >> trans) {
//		if (total.isbn() == trans.isbn()) {
//			total += trans;
//		}
//		else {
//			cout << total << endl;
//			total = trans;
//		}
//	}
//	cout << total << endl;
//}
//else {
//	cerr << "No data?!" << endl;
//	return -1;
//}
//
//return 0;

int main()
{
	/*Sales_data data1, data2;
	double price = 0;
	cout << "Enter the details of the first book:" << endl;
	cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;

	cout << "Enter the details of the second book:" << endl;
	cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	if (data1.bookNo == data2.bookNo) {
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0) {
			cout << " price average " << totalRevenue / totalCnt << endl;
		}
		else { cout << " (no sales) " << endl; }

	}
	else {
		cerr << "Data must refer to the same ISBN" << endl;
		return -1;

		system("pause");
	}*/
	Sales_data CurrData, data;
	double price = 0;
	if (cin >> CurrData.bookNo >> CurrData.units_sold >> price) {
		int cnt = 1;
		while (cin >> data.bookNo >> data.units_sold >> price) {
			if (CurrData.bookNo == data.bookNo) {
				cnt++;
			}
			else {
				cout << CurrData.bookNo << " occurs " << cnt << " times " << endl;
				CurrData = data;
				cnt = 1;
			}
		}
		cout << CurrData.bookNo << " occurs " << cnt << " times " << endl;
	}

	system("pause");
}