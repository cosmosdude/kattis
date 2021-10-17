#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;

bool is_aiou(char c) {
	switch(c) {
		case 'a':
		case 'i':
		case 'o':
		case 'u': return true;
		default: break;
	}

	return false;
}

int main() {

    string y, p;
    cin >> y >> p;

    int li = y.length()-1;
    if (y[li] == 'e') {
    	cout << y << 'x' << p << endl;
    } else if (y[li] == 'x' && y[li-1] == 'e') {
    	cout << y << p << endl;
    } else if (is_aiou(y[li])) {
    	y[li] = 'e';
    	cout << y << 'x' << p << endl;
    } else {
    	cout << y << 'e' << 'x' << p << endl;
    }
	return 0;
}