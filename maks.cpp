#include <iostream>
using namespace std;
int maks (int a, int b);
int main () {
	cout << "nilai maks adalah : " << maks (10, 5);
	return 0;
}
int maks (int a, int b) {
	if (a > b) {
	return a;
	}
	else if (a < b) {
	return b;
	}
	else {
	return 0;
	}
}
