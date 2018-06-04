#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{
	// exercise 3.21
	//vector<int> v2(10);
	//vector<int> v3(10, 42);
	//vector<int> v4{ 10 };
	//vector<int> v5{ 10, 42 };
	//vector<string> v6{10};
	//vector<string> v7{ 10, "hi" };
	//int num = 0;
	//for (auto it = v7.begin(); it != v7.end(); ++it){
	//		cout << v7[num] << endl;
	//		num++;
	//}

	//exercise 3.22
	//vector<string> text{ "words", "are", "great" };

	//for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
	//	for (auto &c : *it) {
	//		c = toupper(c);
	//	}
	//}

	//for (int i = 0; i < text.size(); i++) {
	//	    cout << text[i] << endl;
	//	}

	//exercise 3.23
	//vector<int> numbers(10, 21);
	//int num = 0;

	//for (auto it = numbers.begin(); it != numbers.end(); ++it) {
	//	cout << numbers[num] * 2 << endl;
	//	num++;
	//}

	//exercise 3.24

	/*int num = 0;
	int number = 0;
	vector<int> v;
	while (cin >> number) {
		v.push_back(number);
	}*/

	//cout << "Sum: " << endl;
	//for (auto it = v.begin(); it != v.end(); ++it) {
	//	cout << v[num-1] + v[num] << endl;
	//	++num;
	//}

	//int indx = v.size();
	//for (auto it = v.begin(); it != v.end(); ++it) {
	//	cout << v[num] + v[indx - 1 - num] << endl;
	//	++num;
	//}
	//for (int i = 0; i < v.size(); i++) {
	//	sum = v[i] + v[indx - 1 - i];
	//	cout << sum << endl;
	//}
	int num = 0;
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade)
	{
		if (grade <= 100) {
			++scores[grade / 10];
		}
	}
	/*for (auto it = scores.begin(); it != scores.end(); ++it) {
		cout << 
	}*/
	//for (int i = 0; i < scores.size(); i++) {
	//	    cout << scores[i] << endl;
	//	}
	system("pause");
}