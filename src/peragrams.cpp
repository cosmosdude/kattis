#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
	
	string s;cin >> s;
	int counts[26]; 
	memset(counts, 0, 26 * sizeof(int));

	for(int i = 0; i<s.length(); i++)
		counts[s[i]-'a']+=1;

	int total = 0;
	for(int i = 0; i < 26; i++) 
		if(counts[i]%2 != 0) total++;

	total = max(0, total-1);
	cout << total << endl;

	return 0;
}