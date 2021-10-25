#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>
#include <cstring>
#include <numeric>

using namespace std;

int main() {
	int p, q, s;
	cin >> p >> q >> s;
	cout << ((p*q)/gcd(p,q)<=s ? "yes":"no") << endl; 
	return 0;
}