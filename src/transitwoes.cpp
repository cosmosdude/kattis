#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;

int main() {

	int s, t, n;
	cin >> s >> t >> n;

	int ct = s;

	vector<int> ds;
	for(int i = 0; i < n+1; i++) {

		int d; cin >> d;
		if (i == 0) ct += d;
		else ds.push_back(d);
	}

	for(int i = 0; i< n; i++) {
		int b, c; 
		cin >> b >> c;

		int mod = ct % c;
		if (mod != 0) ct += c-mod;
		
		ct += b + ds[i];
	}

	if (ct <= t) cout << "yes" << endl;
	else cout << "no" << endl;


}

