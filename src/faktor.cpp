#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double articles;
    double requiredImpact;
    
    cin >> articles >> requiredImpact;
    
    requiredImpact -= 1;
    requiredImpact += 0.01;
    
    double bribe = ceil(articles * requiredImpact);
    
    cout << (long)bribe << endl;
    
    return 0;
}
