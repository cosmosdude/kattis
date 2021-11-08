#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;
int main() {
	int n; cin >> n;
	int i = 1;
	while(n--) {
		string s; cin >> s;
		if (i++%2==1) cout << s << endl;
	}
	return 0;
}