#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h> 
#include "Main.h"

using namespace std;

//int fact(int val) {
//	int ret = 1;
//	while (val > 1) {
//		ret *= val--;
//	}
//	return ret;
//}
//
//// exercise 6.4
//int addnum() {
//	cout << "Please write a number for the factorial " << endl;
//	int ret = 0;;
//	cin >> ret;
//	return ret;
//}
//
//// exercise 6.5
//int absnum(int val) {
//	int ret = 0;
//	ret = abs(val);
//	return ret;
//}

// exercise 6.7
//size_t count_call() {
//	static size_t ctr = -1;
//	return ++ctr;
//}

// exercise 6.10
//void changeints(int *cp, int *pc) {
//	int tmp = 0;
//	tmp = *cp;
//	*cp = *pc;
//	*pc = tmp;
//}

// exercise 6.17
//string capletter(const string& cap) {
//	bool hascapital = false;
//	for ( auto c : cap) {
//		if (isupper(c)) {
//			hascapital = true;
//		}
//	}
//	if (hascapital) {
//		cout << cap << " has capital letters " << endl;
//	}
//	else {
//		cout << cap << " does not have capital letters " << endl;
//	}
//	return 0;
//}
//
//string tolower(string cap) {
//	for (auto &c : cap) {
//		c = tolower(c);
//	}
//	return cap;
//}
//
////exercise 6.18
//bool compare(matrix r1, matrix r2);
//vector<int> change_val(int numb, vector<int>::iterator);

//exercise 6.21
//int largerInt(const int intf, const int *intpf) {
//	int rst = 0;
//	if (intf > *intpf) {
//		rst = intf;
//	}
//	else if (intf < *intpf) {
//		rst = *intpf;
//	}
//	return rst;
//}

// exercise 6.22
//int swapInts(int *val1, int *val2) {
//	int tmp = 0;
//		tmp = *val1;
//		*val1 = *val2;
//		*val2 = tmp;
//}

// exercise 6.23
//void print1(const int *cp) {
//	if (cp) {
//		while (*cp) {
//			cout << *cp++ << endl;;
//		} 
//	}
//}
//
//void print2(const int *beg, const int *end) {
//	while (beg != end) {
//		cout << *beg++ << endl;
//	}
//}
//
//void print3(const int ia[], size_t size) {
//	for (size_t i = 0; i != size; ++i) {
//		cout << ia[i] << endl;
//	}
//}

// exercise 6.30
//bool str_subrange(const string &str1, const string &str2) {
//	if (str1.size() == str2.size()) {
//		return str1 == str2;
//	}
//	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
//	for (decltype(size) i = 0; i != size; ++i) {
//		if (str1[i] != str2[i])
//			return;
//	}
//
//}

// exercise 6.32
//int &get(int *arry, int index) {
//	return arry[index];
//}

// exercise 6.33
int recvec(vector<int>::iterator bg, vector<int>::iterator ed) {
	if (bg == ed)
		return;
	cout << *bg << " ";
	recvec((bg + 1), ed);
}

int main()
{
	/*int num = addnum();
	int j = fact(num);
	cout << num <<"! is " << j << endl;

	int absol = absnum(-50);
	cout << "Abs num of -50 is " << absol << endl;*/

	/*for (size_t i = 0; i != 10; ++i) {
		cout << count_call() << endl;
	}*/

	/*int first = 11;
	int second = 22;
	changeints(&first, &second);

	cout << first << " " << second << endl;*/

	//string rndm = "just a ranDom string";

	//// cout << capletter(rndm) << endl;

	//cout << tolower(rndm) << endl;

	// exercise 6.21
	//int value = 7;
	//int *valuep = &value;
	//cout << largerInt(10, valuep) << endl;

	//exercise 6.22
	//int i = 0;
	//int j[2] = { 0, 1 };
	////print1(i);
	//print1(j);
	////print2(begin(i), end(i));
	//print2(begin(j), end(j));
	////print3(i, end(i) - begin(i));
	//print3(j, end(j) - begin(j));

	//exercise 6.32 
	//int ia[10];
	//for (int i = 0; i != 10; ++i)
	//	get(ia, i) = i;

	//exercise 6.34
	vector<int> numb{ 15, 23, 27, 29, 31 };
	cout << recvec(numb.begin(), numb.end()) << endl;

	system("pause");
}