#include <iostream>
#include <string>

using namespace std;

bool canAdd(float a, float b, float c) {
    return ((a + b) == c);
}

bool canSubtract(float a, float b, float c) {
    if ((a - b) == c) {
        return true;
    } else if (b - a == c) {
        return true;
    } else {
        return false;
    }
}

bool canMultiply(float a, float b, float c) {
    return ((a * b) == c);
}

bool canDivide(float a, float b, float c) {
    if ((a / b) == c) {
        return true;
    } else if (b / a == c) {
        return true;
    } else {
        return false;
    }
}


int main() {
    
    
    int n;
    cin >> n;
    
    string str;
    
    for (int i = 0; i < n; i++) {
        
        int a, b, c;
        cin >> a >> b >> c;
        
        if (canAdd(a, b, c)) {
            str = "Possible";
        } else if (canSubtract(a, b, c)) {
            str = "Possible";
        } else if ( canMultiply(a, b, c)){
            str = "Possible";
        } else if (canDivide(a, b, c)) {
            str = "Possible";
        } else {
            str = "Impossible";
        }
        cout << str << endl;
        
    }
    
}

/*
 6
 1 2 3
 2 24 12
 5 3 1
 9 16 7
 7 2 14
 12 4 2
 
 */
