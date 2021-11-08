#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>
#include <cstring>
#include <numeric>
#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

int main() {
	string s; cin >> s;

	int a = 0, b = 0;
	for(int i = 0; i < s.length(); i+=2) {
		char p = s[i];
		char score = s[i+1]-'0';

		if (p == 'A') a+= score;
		else b+= score;

		if (i == s.length()-2) {
			cout << (a>b?'A':'B') << endl;
			break;
		}

		if ( (a >= 11 or b >= 11) && max(a,b)-min(a,b)>=2) {
			cout << (a>b?'A':'B') << endl;
			break;
		}
	}

	return 0;
}