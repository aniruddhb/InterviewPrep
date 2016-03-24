#include <iostream>
#include <cstring>

using namespace std;

void reverse(char str[]) {
	// reverse
	for (int i = 0; i < strlen(str) / 2; i++) {
		// swap
		char tmp = str[i];
		str[i] = str[strlen(str) - 1 - i];
		str[strlen(str) - 1 - i] = tmp;
	}
}

int main (int argc, char* argv[]) {
	// test code
	char f[] = "Hello";
	char i[] = "Merrigoround";
	char g[] = "previously";
	char h[] = "helter";
	char t[] = "butterfly";
	char o[] = "magnet";
	char n[] = "tools";

	// reverse
	reverse(f);
	reverse(i);
	reverse(g);
	reverse(h);
	reverse(t);
	reverse(o);
	reverse(n);

	// print
	cout << f << endl;
	cout << i << endl;
	cout << g << endl;
	cout << h << endl;
	cout << t << endl;
	cout << o << endl;
	cout << n << endl;
}