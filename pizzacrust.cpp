#include <string>
#include <iostream>
#include <cmath>

using namespace std;


int main() {
	int r, c; cin >> r >> c;
	printf("%0.6f\n", 100.f * pow(r-c,2)/(r*r));

}