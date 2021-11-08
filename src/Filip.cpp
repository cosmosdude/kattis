#include <iostream>
#include <cmath>
using namespace std;

void printBackward(long b) {
    long bDif = 0;
    for (int i = 1; i <= 3; i++) {
        
        long p10 = pow(10, i);
        
        long bb = (b / p10) * p10;
        bDif = b - bb;
        
        long p10minus1 = p10 / 10;
        long bSingle = (bDif / p10minus1);
        
        cout << bSingle;
    }
}

int main() {
    
    long a, b;
    cin >> a >> b;
    
//    printBackward(a); cout << endl;
//    printBackward(b); cout << endl;
    
    int condition = 0;
    
    
    long aDif = 0;
    long bDif = 0;
    for (int i = 1; i <= 3; i++) {

        long p10 = pow(10, i);
        // 10
        // a = 123
        // a / 10 = 12
        //
        long aa = (a / p10) * p10;
        aDif = a - aa;
        
        long bb = (b / p10) * p10;
        bDif = b - bb;
        
        long p10minus1 = p10 / 10;
        long aSingle = (aDif / p10minus1);
        long bSingle = (bDif / p10minus1);
//        cout << aDif << " " << bDif << endl;
//        cout << aSingle << " " << bSingle << endl;
//        cout << endl;
//        if (aSingle > bSingle) cout << aSingle;
//        else cout << bSingle;
        if (aSingle > bSingle) { printBackward(a); break; }
        if (bSingle > aSingle) { printBackward(b); break; }
    }
    cout << endl;
    
    
    
    return 0;
}
