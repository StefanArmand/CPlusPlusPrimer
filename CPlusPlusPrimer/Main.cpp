#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//exercise 3.31
	//constexpr size_t array_size = 10;
	//int ia[array_size];
	//for (size_t ix = 1; ix <= array_size; ++ix) {
	//	ia[ix] = ix;
	//}
	//for (int i = 1; i <= array_size; ++i) {
	//	cout << ia[i] << endl;
	//}
	//int(*ia2)[10] = &ia;

	//vector<int> v(10);
	//for (int i = 0; i < v.size(); i++) {
	//	v[i] = i;
	//	cout << v[i] << endl;
	//}

	//exercise 3.35
	//int arr[] = { 1, 3, 5, 7 ,9 };
	//int *e = arr + 5;

	//for (int *b = arr; b != e; b++) {
	//	arr[0] = 0;
	//	(*arr)[b] = 0;
	//	cout << *b << endl;
	//}
	// exercise 3.36
	/*int ar1[] = { 1, 3, 7, 7, 9 };
	int ar2[] = { 1, 3, 5, 7, 9 };
	for (int i = 0; i < 5; i++) {
		if (ar1[i] == ar2[i]) {
			cout << "They are equal" << endl;
		}
		else {
			cout << "They are not equal" << endl;
		}
	}*/

	//exercise 3.37
	//const char ca[] = { 'h', 'e', 'l', 'l', 'o' ,' ' };
	//const char *cp = ca;
	//while (*cp) {
	//	cout << *cp << endl;
	//	++cp;
	//}


	// exercise 3.39

	/*const char ca1[] = "firststring" ;
	const char ca2[] = "secondstring" ;

	if (strcmp(ca1, ca2) > 0 || strcmp(ca1, ca2) < 0) {
		cout << "They are not equal" << endl;
	}
	else {
		cout << "strings are equal" << endl;
	}*/

	//exercise 3.40
	
	const char ca1[] = "firststring";
	const char ca2[] = "secondstring";
	char largeca[] = "";
	strcpy(largeca, ca1);
	strcat(largeca, " ");
	strcat(largeca, ca2);
	
	for (int i = 0; i < 30; i++) {
		cout << largeca[i] << endl;
	}

	system("pause");
}