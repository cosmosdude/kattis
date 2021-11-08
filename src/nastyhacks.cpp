#include <iostream>

using namespace std;

int main() {
    
    int count = 0;
    cin >> count;
    
    for (int i = 0; i < count ; i ++) {
        
        long noAdRev, adRev, cost;
        
        cin >> noAdRev >> adRev >> cost;
        
        long difference = adRev - noAdRev;
        if (difference == cost) { cout << "does not matter" << endl; }
        else if (difference > cost) { cout << "advertise" << endl; }
        else { cout << "do not advertise" << endl; }
        
    }
    
    return 0;
}
