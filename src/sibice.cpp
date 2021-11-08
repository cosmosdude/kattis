#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n, w, h;
    
    cin >> n >> w >> h;
    
    int diagonal = (w * w) + (h * h);
    
    for ( int i = 0; i < n; i++) {
        
        int input;
        cin >> input;
        if ( (input * input) <= diagonal ) {
            cout << "DA" << endl;
        } else {
            cout << "NE" << endl;
        }
        
    }
    
}
