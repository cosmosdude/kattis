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
#include <stack>

using namespace std;

int main() {
	int n; cin >> n;

	vector<long> x(n);
	for(int i = 0; i < n; i ++) {
		cin >> x[i];
	}


	long num1 = 0, deno1 = 0;
	long num2 = 0;
	for(int i = x.size() - 1; i > -1; i--) {

		// e.g 1, 2, 3, 4
		if (deno1 == 0) {
			// 1 / 4
			num1 = 1; deno1 = x[i];
		} else {
			// otherwise,
			num2 = x[i] * deno1;
			num1 += num2;

			long the_gcd = gcd(num1, deno1);
			num1 /= the_gcd;
			deno1 /= the_gcd;

			if (i != 0) swap(num1, deno1);
		}

	}

	long the_gcd = gcd(num1, deno1);
	while(the_gcd != 1) {
		num1 /= the_gcd;
		deno1 /= the_gcd;		
		the_gcd = gcd(num1, deno1);
	}

	printf("%ld/%ld\n", num1, deno1);

}