#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {
	long long int factorial(long long int num);
	long long int n = 0;

	double R_pi;

	double a = ((2 * sqrt(2)) / (99 ^ 2));
	double b = factorial(4 * n) / factorial(n) ^ 4;
	double c = (26390 * n + 1102) / 396 ^ (4 * n );
	double sigma_b_c = 0;
	for (n = 0; n <= numeric_limits<int>::max(); n++) {
		sigma_b_c += n;
	}
	
	R_pi = a * sigma_b_c;
		
	double pi = 1 / R_pi;

	cout << pi << endl;	
}

long long int factorial(long long int num) {
	long long int result = 1;
	for (long long int i = 1; i <= num; ++i) {
		result = result * i;
	}
	return result;
}