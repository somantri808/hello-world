#include <iostream>
using namespace std;

int main () {
	int S [3][3];
	int S1 [3][3];
	int S2 [3][3];
	for (int i=0; i<3; i++) {
	for (int j=0; j<3; j++) {
		cin >> S1 [i][j];
		cin >> S2 [i][j];
		S [i][j] = S1 [i][j] + S2 [i][j];
		}
	}
	cout << S [1][1];
	return 0;
}