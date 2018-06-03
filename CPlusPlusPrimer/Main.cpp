#include <iostream>
#include <string>

using namespace std;

int main()
{
	// exercise 3.3 and 3.4
	/*string line1, line2;
	cin >> line1;
	cin >> line2;*/
	//if (line1 == line2) {
	//	cout << "the lines are equal" << endl;
	//}
	//else if (line1 > line2) {
	//	cout << line1 << " is bigger than " << line2 << endl;
	//}
	//else if (line2 > line1) {
	//	cout << line2 << " is bigger than " << line1 << endl;
	//}

	//if (line1.size() == line2.size()) {
	//	cout << "the lines are equal" << endl;
	//}
	//else if (line1.size() > line2.size()) {
	//		cout << line1 << " is bigger than " << line2 << endl;
	//	}
	//else if (line2.size() > line1.size()) {
	//	cout << line2 << " is bigger than " << line1 << endl;
	//}

	//exercise 3.5
	/*string line;
	string sum;
	while (cin >> line) {
		sum += line + " ";
	}
	cout << sum << endl;
*/
	// exercise 3.6 - 3.8

	//string str("some string");

	//for (char &c : str) {
	//	
	//	cout << "x" << endl;
	//}
	//int i = 0;
	//while (i < str.size()) {
	//	cout << "x" << endl;
	//	i++;
	//}
	//for (int i = 0; i < str.size(); ++i) {
	//	cout << "x" << endl;
	//}

// exercise 3.10
	//string s("Hello, World!!!");
	//for (auto c : s) {
	//	if (ispunct(c)) {
	//		cout << " ";
	//	}
	//	else {
	//		cout << c;
	//	}
	//}
	//cout << endl;

	// exercise 3.11
	const string s = "Keep out!";
	for (auto &c : s) {

	}

	system("pause");
}