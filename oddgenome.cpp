#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;

void process() {
    int n; cin >> n;
    vector<int> g;

    for(int i = 0; i < n; i++) {
        int v; cin >> v;
        g.push_back(v);
    }



    for(int i = 1; i < n-1; i++) {
        if ( g[i] - g[i-1] != 1) {
            cout << i+1 << endl;
            break;
        }
    }


    
}

int main(void) {

    int n; cin >> n;
    while(n) { n--;
        process();
    }
    
    return 0;
    
}
