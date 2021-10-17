#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>


void print_binary(unsigned int n) {
	using namespace std;

	for (int i = 31; i >= 0; i--) {
		cerr << ((n >> i) & 1) <<  " ";
	}
	cerr << endl;
}

int main() {
	using namespace std;

	unsigned int n;
	cin >> n;
	print_binary(n);
	unsigned int result = 0;
	while(n) {
		result = result << 1;
		result += n & 1;
		n = n >> 1;
	}
	print_binary(result);
	cout << result << endl;



	
	return 0;
}