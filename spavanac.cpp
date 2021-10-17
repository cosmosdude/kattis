#include <iostream>

using namespace std;

int main() {
    
    int h, m;
    cin >> h >> m;
    
    m = m - 45;
    if (m < 0) {
        m = 60 + m;
        
        h -= 1;
        if (h < 0) {
            h = 24 + h;
        }
    }
    
    cout << h << " " << m << endl;
    
    return 0;
}
