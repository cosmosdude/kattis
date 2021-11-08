#include <string>
#include <iostream>
#include <cmath>

using namespace std;

void process(int a) {
	int b; cin >> b;

	int m = min(a, b);

	// cerr << "Processing:" << a << ":" << b << endl;

	if (a%m == 0 && b%m == 0) {
		// cerr << "Output ... " ;
		cout << a/m << "/" << b/m << endl;
	} else {
		int div = 2;
		int half = (m/2) + 1;
		for(; div <= half; div++) {
			// cerr << "[div: " << div << "]" << endl;
			if (a%div == 0 && b%div == 0) {
				a /= div;
				b /= div;
				m = min(a, b);
				div = 1;
				half = (m/2)+1;

				// cerr << "reduced => a:" << a << ", b:" << b << endl;
				if (a%m == 0 && b%m == 0) {
					cout << a/m << "/" << b/m << endl;
					return;
				}
			}
		}

		// cerr << "Output ... ";
		cout << a << "/" << b << endl;
	}
}

int main() {

	int n; cin >> n;

	int a;
	cin >> a;
	for(int i = 0; i < n-1; i++) {
		process(a);
	}

}