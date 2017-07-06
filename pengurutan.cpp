#include <iostream>
using namespace std;

int main () {
	int i, k, temp, x [] = {23, 24, 24, 32, 43, 56, 12, 78, 86, 22};
	for (i=-1; i<8; ++i) {
	for (k=9; k > i + 1; --k) {
		if (x[k] < x [k-1]) {
			temp = x[k];
			x[k] = x[k-1];
			x[k-1] = temp;
			}
		}
	}
	for (i=0; i<10; ++i) {
	cout << x[i] << endl;
	}
	return 0;
}