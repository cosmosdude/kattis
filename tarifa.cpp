#include <iostream>

using namespace std;

int main() {
    
    int monthlyMB = 0;
    int n = 0;
    
    cin >> monthlyMB >> n;
    
    int remaining = 0;
    int input = 0;
    for (int i = 0; i < n; i++) {
        cin >> input;
        
        remaining += monthlyMB - input;
    }
    
    cout << remaining + monthlyMB << endl;
    
    return 0;
}
