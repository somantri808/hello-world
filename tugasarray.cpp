#include <iostream>
using namespace std;

char nilai[10];
int i, hasil=0;

int main () {
	for (int i=0; i < 10; i++) {
	cout << "masukan character : ";
	cin >> nilai[i];
		if (nilai[i] == 'a' || nilai [i] == 'A') {
		hasil++;
		}
	}
		cout << "hasil elemen array : ";
		for (int i=0; i < 10; i++) {
		cout << nilai[i];
		}
		cout << endl << "jumlah character A :" << hasil;
}