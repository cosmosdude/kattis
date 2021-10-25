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
	int n; cin >> n;

	double displayed_sec = 0, waited_sec = 0;
	for(int i = 0; i < n; i++) {
		double a, b;
		cin >> a >> b;
		displayed_sec += a*60.f;
		waited_sec += b;
	}

	displayed_sec /= double(n);
	waited_sec /= double(n);
	if (waited_sec <= displayed_sec) cout << "measurement error" << endl;
	else printf("%0.10f\n", waited_sec/displayed_sec);
	return 0;
}