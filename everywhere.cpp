#include <string>
#include <iostream>
#include <array>
#include <cmath>
#include <vector>

using namespace std;

int main() {

	int n;
	cin >> n;

	for(;n; n--) {

		int i;
		cin >> i;

		vector<string> uniques;
		loop: for(; i; i--) {
			string str;
			cin >> str;

			bool flag = 1;
			for(const string s: uniques) {
				if (s == str) {
					flag = 0;
					break;
				}
			}
			if (flag) uniques.push_back(str);
			

		}

		cout << uniques.size() << endl;
	}
}