#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	// exercise 5.3
	//int sum = 0, val = 1;
	//while (val <= 10 && (sum += val, ++val)) {
	//}
	//cout << "Sum of 1 to 10 inclusive is " << sum << endl;

	//system("pause");

	//exercise 5.5
	/*const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	int grade = 100;
	string gradeletter = "";
	if (grade < 60) {
		gradeletter = scores[0];
	}
	else if (grade >= 60 && grade < 70) {
		gradeletter = scores[1];
	}
	else if (grade >= 70 && grade < 80) {
		gradeletter = scores[2];
	}
	else if (grade >= 80 && grade < 90) {
		gradeletter = scores[3];
	}
	else if (grade >= 90 && grade < 100) {
		gradeletter = scores[4];
	}
	else if (grade == 100) {
		gradeletter = scores[5];
	}
	string lettergrade = " ";
	if (grade % 10 > 7) {
		lettergrade += "+";
	}
	else if (grade % 10 < 3 && gradeletter != "A++") {
		lettergrade += "-";
	}
	cout << gradeletter << lettergrade << endl;*/

	//exercise 5.6
	/*int grade = 77;
	string finalgrade = (grade == 100) ? "A++" : 
		(grade >= 90 && grade < 100) ? "A" : 
		(grade >= 80 && grade < 90) ? "B" : 
		(grade >= 70 && grade < 80) ? "C" : 
		(grade >= 60 && grade < 70) ? "D" : 
		(grade < 60) ? "Fail" : "Not a valid grade (1-100)";
	cout << finalgrade << endl;*/

	//exercise 5.9
	//char ch = ' ';
	//unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, cCnt = 0;
	//while (cin >> ch) {
	//	if (ch == 'a') {
	//		++aCnt;
	//	}
	//	else if (ch == 'e') {
	//		++eCnt;
	//	}
	//	else if (ch == 'i') {
	//		++iCnt;
	//	}
	//	else if (ch == 'o') {
	//		++oCnt;
	//	}
	//	else if (ch == 'u') {
	//		++uCnt;
	//	}
	//	else {
	//		++cCnt;
	//	}
	//}
	//cout << "Number of vowels a: " << aCnt << "\n"
	//	<< "Number of vowels e: " << eCnt << "\n"
	//	<< "Number of vowels i: " << iCnt << "\n"
	//	<< "Number of vowels u: " << uCnt << "\n"
	//	<< "Number of vowels o: " << oCnt << "\n"
	//	<< "Number of consonants: " << cCnt << endl;

	//exercise 5.10
	//unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, sCnt = 0, tCnt = 0, nCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0, cCnt = 0;
	//char ch;
	//while (cin >> ch) {
	//	switch (ch) {
	//	case 'a':
	//		++aCnt;
	//		break;
	//	case 'e':
	//		++eCnt;
	//		break;
	//	case 'i':
	//		++iCnt;
	//		break;
	//	case 'o':
	//		++oCnt;
	//		break;
	//	case 'u':
	//		++uCnt;
	//		break;
	//	case 'A':
	//		++aCnt;
	//		break;
	//	case 'E':
	//		++eCnt;
	//		break;
	//	case 'I':
	//		++iCnt;
	//		break;
	//	case 'O':
	//		++oCnt;
	//		break;
	//	case 'U':
	//		++uCnt;
	//		break;
	//	case ' ':
	//		++sCnt;
	//		break;
	//	case '/t':
	//		++tCnt;
	//		break;
	//	case '/n':
	//		++nCnt;
	//		break;
	//	default:
	//		++cCnt;
	//		break;
	//}
	//	if (ch == 'f' && ch == 'f') {
	//		++ffCnt;
	//	}
	//	else if (ch == 'f' && ch == 'l') {
	//		++flCnt;
	//	}
	//	else if (ch == 'f' && ch == 'i') {
	//		++fiCnt;
	//	}
	//}
	//cout << "Number of vowels a: " << aCnt << "\n"
	//	<< "Number of vowels e: " << eCnt << "\n"
	//	<< "Number of vowels i: " << iCnt << "\n"
	//	<< "Number of vowels u: " << uCnt << "\n"
	//	<< "Number of vowels o: " << oCnt << "\n"
	//	<< "Number of spaces: " << sCnt << "\n"
	//	<< "Number of tabs: " << tCnt << "\n"
	//	<< "Number of new lines: " << oCnt << "\n"
	//	<< "Number of ff's: " << ffCnt << "\n"
	//	<< "Number of fl's: " << flCnt << "\n"
	//	<< "Number of fi's: " << fiCnt << "\n"
	//	<< "Number of consonants: " << cCnt << endl;

// exercise 5.14
//string word = " ";
//int indx = 0;
//vector<string> words;
//string repeat = " ";
//int repeated = 1;
//int cnt = 1;
//
//while (cin >> word) {
//	if (words.empty()) {
//		words.push_back(word);
//		continue;
//	}	
//	words.push_back(word);
//	
//	if (words[indx+1] == words[indx]) {
//		repeat = words[indx + 1];
//		repeated += cnt;
//	}
//
//	indx++;
//}
//
//if (repeat == " ") {
//	cout << "No repeats" << endl;
//}
//else {
//	cout << repeat << " has repeated " << repeated << " times" << endl;
//}

// exercise 5.17
	//vector<int> v1{ 0, 1, 1, 2};
	//vector<int> v2{ 0, 1, 1, 2, 3, 5, 8 };
	//int cnt = 0;
	//for (auto &r1 : v1 ) {
	//	if(r1 == v2[cnt]){
	//		cout << "true" << endl;
	//	}
	//	cnt++;
	//}

//exercise 5.19

//string rsp = "";
//do {
//	string str1 = "";
//	string str2 = "";
//	cin >> str1 >> str2;
//	if (str1.size() < str2.size()) {
//		cout << str1 << " is smaller than " << str2 << endl;
//	}
//	else {
//		cout << str1 << " is bigger than " << str2 << endl;
//	}
//	cout << "Do you want to continue? " << endl;
//	cin >> rsp;
//} while (!rsp.empty() && rsp[0] !='n');

// exercise 5.20
//string word = " ";
//int indx = 0;
//vector<string> words;
//string repeat = " ";
//int cnt = 1;
//
//while (cin >> word) {
//	if (words.empty()) {
//		words.push_back(word);
//		continue;
//	}	
//	words.push_back(word);
//	
//	if (words[indx+1] == words[indx]) {
//		repeat = words[indx + 1];
//		break;
//	}
//
//	indx++;
//}
//
//if (repeat == " ") {
//	cout << "No repeats" << endl;
//}
//else {
//	cout << repeat << " has repeated two times" << endl;
//}

// exercise 5.21
string word = " ";
int indx = 0;
vector<string> words;
string repeat = " ";
int cnt = 1;

while (cin >> word) {
	if (words.empty()) {
		words.push_back(word);
		continue;
	}	
	words.push_back(word);
	if (!isupper(word[0])) {
		continue;
	}
	if (words[indx+1] == words[indx]) {
		repeat = words[indx + 1];
		break;
	}

	indx++;
}

if (repeat == " ") {
	cout << "No repeats" << endl;
}
else {
	cout << repeat << " has repeated two times" << endl;
}
	system("pause");
}