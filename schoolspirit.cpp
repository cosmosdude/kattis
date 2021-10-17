#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;

double ssd(vector<int> & scores, int index) {
	double total = 0;
	double factor = 1;
	constexpr double fractal = 4.f/5.f;

	for(int i = 0; i < scores.size(); i++) {
		if (index) {
			total += (double)scores[i] * factor;
			factor*=fractal;
		}
		index--;
		
	}
	return total / 5.f;
}



int main() {

	int n; cin >> n;

	vector<int> scores;

	for(int i = 0; i < n; i++) {
		int v; cin >> v;
		int j = 0;
		for(; j < scores.size(); j++) {
			if (v > scores[j]) {
				break;
			}
		}
		scores.insert(scores.begin() + (j), v);
	}
	
	double avg = 0;
	double f = 4./5.;
	for(int i = 0; i < n; i++){
		avg += scores[i] * pow(f, i);
	}
	avg /= 5.f;

	printf("%0.6f\n", avg);



	double total = 0;
	for(int i = 0; i < n; i++) {
		int p = 0;
		double t = 0;
		for(int j = 0; j < n; j++) {
			if (j != i) {
				t += scores[j] * pow(f, p);
				p ++;
			}
		}
		total += t / 5.;
	}

	printf("%0.6f\n", total / n);
	
}