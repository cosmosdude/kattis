#include <string>
#include <iostream>

using namespace std;

int main() {

	std::string a, b;

	getline(cin, a);
	getline(cin, b);

	cout << (a.size() >= b.size() ? "go": "no") << endl;

}