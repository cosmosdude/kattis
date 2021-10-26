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

int digitsum(string& s) {
	int r = 0;
	for(char&c:s) r+= int(c-'0');
	return r;
}

int str2int(string& s) {
	int r = 0;
	for(char&c:s) r = r*10 + int(c-'0');
	return r;
}

int main() {
	
	int n; cin >> n;
	while(n--) {
		string num; cin >> num;
		int s = digitsum(num);
		for(int i = num.length() - 1; i > -1; i--) {
			if (num[i] != '0') {
				num[i] -= 1;

				int ds = digitsum(num);
				if (s-ds == 1) {
					cout << str2int(num) << endl;
					break;
				}
				num[i] += 1;
			}
		}
	}

	return 0;
}