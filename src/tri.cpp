#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;

int main() {
    int l, d, x;

    cin >> l >> d >> x;

    if (x == (l + d)) printf("%d+%d=%d\n",l, d, x);
    else if (x == (l - d)) printf("%d-%d=%d\n",l, d, x);
    else if (x == (l * d)) printf("%d*%d=%d\n",l, d, x);
    else if (d != 0 && x == (l / d)) printf("%d/%d=%d\n",l, d, x);
    else if (l == (d + x)) printf("%d=%d+%d\n",l, d, x);
    else if (l == (d - x)) printf("%d=%d-%d\n",l, d, x);
    else if (l == (d * x)) printf("%d=%d*%d\n",l, d, x);
    else if (x != 0 && l == (d / x)) printf("%d=%d/%d\n",l, d, x);    

    return 0;
}