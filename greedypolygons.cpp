#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;

void calculate_land_grab() {
	double n, l, d, g;

	cin >> n >> l >> d >> g;

	double total_angle = ((n-2.f)*M_PI);
	double each_angle = total_angle/n;

	// useful
	double parameter = n*l;
	double apothem = l / (2*tan(M_PI/n));

	double original_area = parameter * apothem / 2.f;

	double total_land_grab_distance = d * g;

	double extra_rect_area = total_land_grab_distance * l * n;
	double extra_circle_angle = M_PI - each_angle ;
	double extra_circular_area = extra_circle_angle * pow(total_land_grab_distance, 2) * n/2;

	printf("%0.10f\n", (original_area + extra_rect_area + extra_circular_area));


}	

int main() { 
	int n; cin >> n;
	while(n--) {
		calculate_land_grab();
	}
}

