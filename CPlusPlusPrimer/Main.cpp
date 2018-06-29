#include <iostream>
#include <vector>
#include "Main.h"

using namespace std;

//bool findvalue(int first, int second, int ValueToFind) {
//	vector<int> v;
//	int val = first;
//	bool isvalue = false;
//	while (first < second) {
//		v.push_back(first);
//		first++;
//	}
//	first = val;
//	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it){
//		if (ValueToFind == *it) {
//			isvalue = true;
//		}
//	}
//	return isvalue;
//}

int main()
{
	//if (findvalue(5, 21, 27)) {
	//	cout << "the value exists" << endl;
	//}
	//else {
	//	cout << "the value doesn't exists" << endl;
	//}
	vector<int> v1{ 1 };
	vector<int> v1 (1);
	vector<int> v1( 5, 10 );
	vector<int> v1 = { 1 };
	system("pause");
}