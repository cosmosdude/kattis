#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    long d1, d2;
    cin >> d1 >> d2;
    
    int count = d1 + d2;
    long * grid = new long[count];
    for (int i = 0; i < count; i++) grid[i] = 0;
    
    
    int highestPossibility = 0;
    for (int i = 1; i <= d1; i++) {
        for (int ii = 1; ii <= d2; ii++) {
            int index = i + ii - 1;
            grid[index] += 1;
            if (grid[index] >= highestPossibility) {
                highestPossibility = grid[index];
            }
        }
    }
    
    
    vector<int> indices;
    for (int i = 0; i < count; i++) {
        if (grid[i] == highestPossibility) {
            indices.push_back(i + 1);
        }
    }
    
    for (int i = 0, size = indices.size(); i < size; i++) {
        cout << indices[i] << endl;
    }
    
    delete [] grid;
    
    return 0;
}
