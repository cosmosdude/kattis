#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;

int waste(int a, int b) {
	int d = max(a, b) - min(a,b);
	if (d) {
		if (d%2 == 0) return (d/2) - 1;
		else return d/2;
	} else return 0;
}

int main() {

	int p, d;
	cin >> p >> d;


	vector<int> a; a.resize(d);
	vector<int> b; b.resize(d);

	for(int i = 0; i < d; i++) {
		a[i] = 0; b[i] = 0;
	}

	for(int i = 0; i < p; i++) {
		int district; cin >> district;

		district -= 1;

		int avote, bvote;
		cin >> avote >> bvote;

		a[district] += avote;
		b[district] += bvote;
	}

	// double atotal = 0, btotal = 0;

	double total_vote_cast = 0;
	double awaste = 0, bwaste = 0;
	double total_gap = 0;

	for(int i = 0; i < d; i++) {
		int av = a[i];
		int bv = b[i];

		//accumulate total vote
		total_vote_cast += av + bv;

		// print winner
		cout << (av > bv ? 'A' : 'B') << " ";


		double wa, wb;
		if (av > bv) {
			wa = waste(av,bv);
			wb = bv;
			cout << waste(av, bv) << " " << bv << endl;
		} else {
			wa = av; wb = waste(av,bv);
			cout << av << " " << waste(av, bv) << endl;
		}

		awaste += wa; bwaste += wb;

	}
	total_gap = abs(awaste-bwaste)/total_vote_cast;

	printf("%0.10f\n", total_gap);

	return 0;
}

