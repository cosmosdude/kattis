#include <iostream>

using namespace std;


int main()
{
    
    int count = 0;
    cin >> count;
    
    double total = 0;
    for(int i = 0; i < count; i ++) {
        double qualityOfLife = 0.0;
        double numberOfYears = 0.0;
        
        cin >> qualityOfLife >> numberOfYears;
        total += (qualityOfLife * numberOfYears);
    }
    cout << total << endl;
    
    
    
}
