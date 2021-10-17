#include <iostream>

using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    
    int linearPoints = 2;
    
    for (int i = 0; i < n; i++) {
        linearPoints = linearPoints + (linearPoints - 1);
    }
    
//    int total = 0;
//    for (int i = 0; i < n; i++) {
//
//    }
    cout << linearPoints * linearPoints << endl;
    
}
