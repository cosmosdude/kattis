#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;



int main(void) {

	int k, q, r, b, kn, p;
	cin >> k >> q >> r >> b >> kn >> p;

	int kk = 1, kq = 1, kr = 2, kb = 2, kkn= 2, kp = 8;

	printf("%d ", kk-k);
	printf("%d ", kq-q);
	printf("%d ", kr-r);
	printf("%d ", kb-b);
	printf("%d ", kkn-kn);
	printf("%d\n", kp-p);

}