#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;



int main() {
	int n;
	cin >> n;
	while(n) {
		string a, b;
		cin >> a >> b;

		cout << a << endl;
		cout << b << endl;
		for(int i = 0; i < a.length(); i++) {
			cout << ((a[i] == b[i]) ? '.':'*') ;
		}
		cout << endl;
		n --;
	}
	
}