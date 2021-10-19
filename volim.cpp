#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>

using namespace std;

int main() {
	
	int s = 0; cin >> s; s--;
	int pcount = 8;
	int rsec = 210;

	int n; cin >> n;

	bool timeout = false;
	while(n--) {
		int eta; cin >> eta;
		char ans; cin >> ans;
		if (rsec >= eta and ans == 'T') s = (s+1)%pcount;
		rsec -= eta;
	}
	cout << s+1 << endl;

    return 0;
}