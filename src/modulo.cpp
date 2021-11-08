#include <iostream>
#include <vector>

using namespace std;



int main() {
    
    vector <int> distinct;
    
    for( int i = 0; i < 10; i++) {
        int value = 0;
        cin >> value;
        
        int modulo = value % 42;
        bool contains = false;
        for (int ii = 0, len = distinct.size(); ii < len; ii++) {
            if (modulo == distinct[ii]) {
                contains = true;
                break;
            }
        }
        
        if (contains == false) {
            distinct.push_back(modulo);
        }
        
    }
    
    cout << distinct.size() << endl;
    
    return 0;
}
