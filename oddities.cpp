#include <iostream>

using namespace std;

int main() {
    
    int n, x;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cout << x << " is ";
        if ( (x % 2) == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }
    
    return 0;
}
