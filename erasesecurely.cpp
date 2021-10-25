#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
	int n; cin >> n;
	string a, b;
	cin >> a >> b;


	bool success = true;
	for(int i = 0; i < a.length(); i++) {
		int va = a[i] - '0';
		int vb = b[i] - '0';

		int nswitch = (va + n) % 2;
		if (vb != nswitch) {
			success = false;
			break;
		}
	}

	cout << (success ? "Deletion succeeded" : "Deletion failed") << endl;

	return 0;
}