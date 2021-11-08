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
	int e, f, c;
	cin >> e >> f >> c;

	e += f;

	int drink = 0;

	while(e >= c) {
		int nsoda = e/c;
		int left = e%c;
		e = nsoda + left;
		drink += nsoda;
	}

	cout << drink << endl;

}