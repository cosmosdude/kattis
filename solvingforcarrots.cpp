#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    int solved;
    cin >> n >> solved;
    cin.ignore();
    
    string str;
    for(int i = 0, len = n; i < len; i++) {
        getline(cin, str);
    }
    
    cout << solved << endl;
    
    
    return 0;
}
