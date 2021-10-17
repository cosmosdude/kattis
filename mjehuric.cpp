#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;

void print(array<int, 5> arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i+1 != arr.size()) cout << " ";
    }
    cout << endl;
}

int main(void) {

    array<int, 5> arr;
    for(int i = 0; i < 5; i++) {
        int n; cin >> n;
        arr[i] = n;
    }

    for(int i = 0 ; i < 5; i++) {
        for(int j = 0; j<4; j++) {
            if (arr[j] > arr[j+1]){
                arr[j] ^= arr[j+1];
                arr[j+1] ^= arr[j];
                arr[j] ^= arr[j+1];
                print(arr);
            }
        }
    }

    return 0;
    
}
