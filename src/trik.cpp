#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string input;
    
    cin >> input;
    
    bool cups[] = {true, false, false};
    
    for (int i = 0; i < input.length(); i++) {
        
        char c = input[i];
        if (c == 'A') {
            bool t = cups[1];
            cups[1] = cups[0];
            cups[0] = t;
        } else if (c == 'B') {
            bool t = cups[2];
            cups[2] = cups[1];
            cups[1] = t;
        } else {
            bool t = cups[0];
            cups[0] = cups[2];
            cups[2] = t;
        }
    }
    
    
    for (int i = 0 ; i < 3; i++) {
        if (cups[i]) {
            cout << (i + 1) << endl;
            break;
        }
    }
    
    
    return 0;
}
