#include <iostream>
using namespace std;

long unsigned rekursiffaktorial (int f) {
	if (f == 0)
		return 1;
	else
		return f*
		rekursiffaktorial (f - 1);
		//penghenti
		}
		
	int main () {
	int x;
	int n = 4;
	cout << n << " ! = " << rekursiffaktorial (n) << endl;
	
	n = 9;
	cout << n << " ! = " << rekursiffaktorial (n) << endl;
	cout << "masukan angka yang akan di faktorialkan : ";
	cin >> x;
	cout << x << " ! = " << rekursiffaktorial (x) << endl;
	return 0;
}