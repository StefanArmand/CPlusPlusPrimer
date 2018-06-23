#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


// exercise 8.1
//istream& process_input(istream& is) {
//	string inpt = " ";
//	while (is >> inpt) {
//		cout << inpt << endl;
//	}
//	auto old_state = cin.rdstate();
//	is.clear();
//	is.setstate(old_state);
//	return is;
//}

// exercise 8.3
vector<string> aVector(string &filename) {
	ifstream in(filename);
	vector<string> vs;
	for (string s; in >> s;) {
		vs.push_back(s);
	}
	return vs;
}

int main()
{
	//process_input(cin);


}