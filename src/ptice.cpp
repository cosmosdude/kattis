#include <string>
#include <iostream>
#include <cmath>

using namespace std;


int main() {

	int n; string s;
	cin >> n >> s;

	string sa = "ABC", sb="BABC", sg="CCAABB";

	int a = 0, b = 0, g = 0;
	for(int i = 0; i < s.length(); i++) {
		if ( sa[i%sa.length()] == s[i]) a++;
		if ( sb[i%sb.length()] == s[i]) b++;
		if ( sg[i%sg.length()] == s[i]) g++;
	}

	int maximum = max(max(a, b), g);

	cout << maximum << endl;
	if (maximum == a) cout << "Adrian" << endl;
	if (maximum == b) cout << "Bruno" << endl;
	if (maximum == g) cout << "Goran" << endl;
}