#include <string>
#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int biggest(array<int, 3>& in) {
	return max(in[0], max(in[1], in[2]));
}

int smallest(array<int, 3>& in) {
	return min(in[0], min(in[1], in[2]));
}

int middle(array<int, 3>& in) {
	int s = smallest(in);
	int b = biggest(in);
	for(int i = 0; i < in.size(); i++) {
		if (in[i] != s && in[i] != b) return in[i];
	}
	return 0;
}


int main() {

	array<int, 3> arr;
	for (int a, i = 0; i < 3; i++) {
		cin >> a;
		arr[i] = a;
	}

	string str; cin >> str;

	for(int i = 0; i < str.length(); i++) {
		char c = str[i];

		if (c == 'A') cout << smallest(arr);
		if (c == 'B') cout << middle(arr);
		if (c == 'C') cout << biggest(arr);

		if (i + 1 != str.length()) cout << " ";
	}
	cout << endl;


	

}