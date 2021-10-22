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
	
	long n, d; cin >> n >> d;

	while(n != 0 && d != 0) {
		if (n < d) printf("0 %ld / %ld\n", n, d);
		else printf("%ld %ld / %ld\n", n/d, n%d, d);
		cin >> n >> d;
	} 

	return 0;
}