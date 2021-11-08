#include <string>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void process() {

	int w, h;
	cin >> h >> w;

	vector<string> s; s.resize(h);

	for(int i = 0; i < h; i++) {
		string a; cin >> a;
		
		for(int j = 0; j < w/2; j++) {
			int f = j, r = (w-1)-j;
			a[j] ^= a[r];
			a[r] ^= a[j];
			a[j] ^= a[r];
		}

		s[(h-1)-i] = a;
	}

	for(string & a: s) {
		cout << a << endl;
	}







}

int main() {

	int n; cin >> n;
	for(int i = 0; i < n; i++)  {
		cout << "Test " << i+1 << endl;
		process();
	}

}