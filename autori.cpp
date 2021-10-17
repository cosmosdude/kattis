
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    string input;
    cin >> input;
    
    for(int i = 0; i < input.length(); i++) {
        if (isupper(input[i])) {
            cout << input[i];
        }
    }
    cout << endl;
    
    return 0;
}
