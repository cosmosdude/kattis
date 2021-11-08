#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>
#include <cstring>

using namespace std;



int main() {
	int num_value[26]{
		2, 2, 2, //abc
		3, 3, 3, //def
		4, 4, 4, //ghi
		5, 5, 5, //jkl
		6, 6, 6, //mno
		7, 7, 7, 7, //pqrs
		8, 8, 8, //tuv
		9, 9, 9, 9 //wxyz
	};

	int num_count[26] {
		1, 2, 3, //abc
		1, 2, 3, //def
		1, 2, 3, //ghi
		1, 2, 3, //jkl
		1, 2, 3, //mno
		1, 2, 3, 4, //pqrs
		1, 2, 3, //tuv
		1, 2, 3, 4 //wxyz
	};

	int n; cin >> n;	
	cin.ignore();
	for(int c = 1; c <= n; c++) {

		cout << "Case #" << c << ": ";
		string s; getline(cin, s);

		int prev = 0;
		for(int i = 0; i < s.length(); i++) {
			char c = s[i];

			int num = 0;
			int count = 1;

			if (c == ' ') num = 0;
			else {
				num = num_value[c-'a'];
				count = num_count[c-'a'];
			}

			if ( i != 0 && prev == num) cout << " ";
			while(count) { count--;
				cout << num ;
			}

			prev = num;
		}
		cout << endl;

		// cout << s << endl;

	}
}