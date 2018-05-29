#include <iostream>
#include "Main.h"

using namespace std;

//exercise 2.39, 2.40
struct Sales_data { /* empty */ };
Sales_data accum, trans, *salesptr;

int main()
{
	// exercise
//	unsigned u = 10, u2 = 42;
//	cout << u2 - u << endl;  //result 32
//	cout << u - u2 << endl;  // result warped
//	int i = 10, i2 = 42;
//	cout << i2 - i << endl; // result = 32
//	cout << i - i2 << endl; // result = -32
//	cout << i - u << endl; // result = 0
//	cout << u - i << endl; // result = 0

	// exercise
	//int i = 100, sum = 0;
	//for (int i = 0; i != 10; ++i) sum += i;
	//cout << i << " " << sum << endl;

	//int i, &ri = i;
	//i = 5;
	//ri = 10;
	//cout << i << " " << ri << endl;

	// exercise 2.18

	//int iref = 40;
	//int *p = &iref;
	//cout << *p << endl;
	//iref = 10;
	//cout << *p << endl;

	/*int i = 42;
	int *p1 = &i;
	*p1 = p1 *p1;*/

	// exercise 2.34
	//int i = 0, &r = i;
	//auto a = r;

	//const int ci = i, &cr = ci;
	//auto b = ci;
	//auto c = cr;
	//auto d = &i;
	//auto e = &ci;
	//const auto f = ci;
	//auto &g = ci;
	//
	//cout << "Before " << g << endl;
	////a = 42;
	////b = 42;
	////c = 42;
	////d = 42;
	////e = 42;
	//g = 42;
	//cout << "After " << g << endl;

	//exercise 2.35
	//const int i = 42;
	//auto j = i;
	//const auto &k = i;
	//auto *p = &i;
	//const auto j2 = i, &k2 = i;

	// 2.36
	//int a = 3, b = 4;
	//decltype(a) c = a;
	//decltype((b)) d = a;
	//++c;
	//++d;

	system("pause");
}