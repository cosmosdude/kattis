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
	int n; cin >> n;
	while(n) { n--;
		double cal;
		cin >> cal;

		int bottles = (int)ceil(cal/400.f);

		cout << bottles << endl;
	}
}