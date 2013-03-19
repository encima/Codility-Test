#include <vector>
#include <algorithm>
#include <stdint.h>
#include <iostream>
#include <sstream>

using namespace std;

// Problem: Upon receiving two numbers as arguments, create a program
// that searches for the first occurrence of int A within int B

string intToString(int num) {
	stringstream ss;
	ss << num;
	return ss.str();
}

// Short time limit (<10 mins), string based approach
// was time efficient.
int main(int argc, char const *argv[]) {
	string a = intToString(311);
	string b = intToString(253785311);
	int index = b.find(a);
	cout << index << endl;
}