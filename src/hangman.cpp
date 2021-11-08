#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;


inline int index(char c) {
	return c - 'A';
}

int main() {

	string w, p;
	getline(cin, w);
	getline(cin, p);

	vector<int> a; a.resize(26);
    
    int p1life = w.length();

    int p2life = 10;

    for(int i = 0; i < w.length(); i++) {
    	a[index(w[i])] += 1;
    }

    for(int i = 0; i < p.length(); i++) {
    	char c = p[i];
    	int j = index(c);
    	if (a[j] != 0) {
    		p1life -= a[j];
    		a[j] = 0;
    	} else {
    		p2life--;
    	}

    	if (p1life == 0) break;
    	if (p2life == 0) break;
    }

    if (p1life == 0) cout << "WIN" << endl;
    if (p2life == 0) cout << "LOSE" << endl;
}