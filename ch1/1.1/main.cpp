#include <iostream>
#include <map>

using namespace std;

/* function */
bool hasUniqueChars(string s) {
	// boolean arr
	bool chars[256];

	// set all values to false
	for (int i = 0; i < 256; i++) {
		chars[i] = false;
	}

	// check if
	for (int i = 0; i < s.length(); i++) {
		if (chars[(int)s.at(i)]) {
			return false;
		}
		chars[(int)s.at(i)] = true;
	}

	return true;
}

/* no data structures function */
bool noStructs(string s) {
	// loop through
	for (int i = 0; i < s.length(); i++) {
		char c = s.at(i);
		for (int j = i - 1; j >= 0; j--) {
			if (c == s.at(j)) {
				return false;
			}
		}
	}

	return true;
}

int main (int argc, char* argv[]) {
	// test code
	cout << hasUniqueChars("mama") << endl; // false
	cout << hasUniqueChars("Mama") << endl; // false
	cout << hasUniqueChars("Child") << endl; // true
	cout << hasUniqueChars("child") << endl; // true
	cout << noStructs("mama") << endl;
	cout << noStructs("Mama") << endl;
	cout << noStructs("Child") << endl;
	cout << noStructs("child") << endl;
}