#include <string>
#include <iostream>

using namespace std;

/* function */
string compress(string s) {
	// build result string
	string res = "";

	// loop through s
	for (int i = 0; i < s.length(); i++) {
		// curr char
		char curr = s.at(i);

		// counter and iterator
		int count = 0;

		// while loop
		while (i < s.length() && s.at(i) == curr) {
			count++;
			i++;
		}

		// build content string
		res += curr;
		res += (char)(count + 48);

		// decrement i
		i--;
	}

	return (res.length() < s.length()) ? res : s;
}

int main (int argc, char* argv[]) {
	string s = "aabcccccaaa";
	s = compress(s);
	cout << s << endl;
}