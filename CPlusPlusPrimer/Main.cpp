#include <iostream>
#include "Main.h"

using namespace std;

int main()
{

	//ex 1.9
	/*int sum = 0; int val = 50;
	while (val <= 100) {
		sum += val;
		val++;
	}
	cout << "Sum of 50 to 100 is: " << sum << endl;*/

	//ex 1.10
	//int val = 10;
	//while (val != -1) {
	//	cout << val << endl;
	//	val--;
	//}

	// ex 1.11

	/*int val = 0;
	int val2 = 0;
	cout << "Please enter the first number: ";
	cin >> val;
	cout << "Please enter the second number: ";
	cin >> val2;

	while (val <= val2) {
		cout << val << endl;
		val++;
	}*/

	// ex 1.12
	//int sum = 0;
	//for (int i = -100; i <= 100; ++i)
	//	sum += i;

	//cout << sum << endl;

	// ex 1.13

	/*int sum = 0;
	for (int val = 0; val <= 10; ++val) {
		sum += val;
	}
	cout << "Sum of 1 to 10 inclusive is: " << sum << endl;*/

	// ex 1.17 -18
	//int currVal = 0; int val = 0;
	//if (cin >> currVal) {
	//	int cnt = 1;
	//	while (cin >> val) {
	//		if (val == currVal) {
	//			++cnt;
	//		}
	//		else { cout << currVal << " occurs " << cnt << " times" << endl; 
	//		currVal = val;
	//		cnt = 1;
	//		}
	//	}
	//	cout << currVal << " occurs " << cnt << " times" << endl;
	//}

	// ex 1.19

	/*int val1 = 0;
	int val2 = 0;
	cout << "Please enter the first number: ";
	cin >> val1;
	cout << "Please enter the second number: ";
	cin >> val2;

	if (val1 > val2) {
		while (val2 <= val1) {
			cout << val2 << endl;
			val2++;
		}
	}
	else
	{
		while (val1 <= val2) {
			cout << val1 << endl;
			val1++;
		}
	}*/

	//1.21

	/*Sales_item item1, item2;
	cin >> item1 >> item2;
	cout << item1 + item2 << endl;*/

	//1.22

	//Sales_item val;
	//Sales_item sum;
	//while (cin >> val) {
	//	sum += val;
	//}

	//cout << sum << endl;

	//1.23

//Sales_item CurrItem, item;
//
//if (cin >> CurrItem) {
//	int cnt = 1;
//	while (cin >> item) {
//		if (CurrItem.isbn() == item.isbn()) {
//			cnt++;
//		}
//		else { cout << CurrItem << " occurs " << cnt << " times " << endl; 
//		CurrItem = item;
//		cnt = 1;
//		}
//	}
//	cout << CurrItem << " occurs " << cnt << " times " << endl;
//}

// ex 1.25

Sales_item total;
if (cin >> total) {
	Sales_item trans;
	while (cin >> trans) {
		if (total.isbn() == trans.isbn()) {
			total += trans;
		}
		else {
			cout << total << endl;
			total = trans;
		}
	}
	cout << total << endl;
}
else {
	cerr << "No data?!" << endl;
	return -1;
}

return 0;


	system("pause");
}