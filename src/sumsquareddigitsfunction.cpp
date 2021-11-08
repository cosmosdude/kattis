#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;

int ssd(int num, int b) {
	int total = 0;
	while(num) {
		total += pow(num % b,2);
		num /= b;
	}
	return total;
}

int main() {
	int n; cin >> n;
	
	while(n) { n--;
		int k, b, num;
		cin >> k >> b >> num;
		cout << k << " ";
		cout << ssd(num, b) << endl;
	}
	
}