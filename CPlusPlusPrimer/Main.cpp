#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	// exercise 3.14
	/*int num = 0;
	vector<int> ints;
	while (cin >> num) {
		ints.push_back(num);
	}
	for (int i = 0; i < ints.size(); ++i) {
		cout << ints[i] << endl;
	}*/

	// exercise 3.15
	//string word;
	//vector<string> names;
	//while (cin >> word) {
	//	names.push_back(word);
	//}
	//for (int i = 0; i < names.size(); ++i) {
	//	cout << names[i] << endl;
	//}

	//exercise 3.17
	//string words;
	//vector<string> v;
	//while (cin >> words) {
	//	v.push_back(words);
	//}
	//for (int i = 0; i < v.size(); i++) {
	//	for (auto &c : v[i]) {
	//		c = toupper(c);
	//	}
	//}

	//for (int i = 0; i < v.size(); i++) {
	//	cout << v[i] << endl;
	//}

	//exercise 3.19
	//vector<int> v1{42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };
	//vector<int> v2(10, 42);
	//vector<int> v3;
	//for (int i = 0; i < 10; ++i) {
	//	v3.push_back(42);
	//}

	//exercise 3.20

	int sum = 0;
	int number = 0;
	vector<int> v;
	while (cin >> number) {
		v.push_back(number);
	}
	//for (int i = 1; i < v.size(); i++) {
	//	sum = v[i-1] + v[i];
	//	cout << sum << endl;
	//}
	int indx = v.size();
	for (int i = 0; i < v.size(); i++) {
		sum = v[i] + v[indx - 1 - i];
		cout << sum << endl;
	}

	system("pause");
}