#include <iostream>
#include <conio.h>
using namespace std;

//prototype
void masukan();
void pilA();
void pilB();

//variabel global
int angka, jumlah, maks, min, pilihan;

int main () {
	while (pilihan != 3) {
	cout << "==================================\n";
	cout << "menu\n";
	cout << " 1. cari nilai terkecil\n";
	cout << " 2. cari nilai terbesar\n";
	cout << " 3. keluar\n;
	cout << "==================================\n;
	cout << "pilihan anda : ";
	cin >> pilihan;
	if (pilihan == 1) {
	pilA();
	}
	else if (pilihan == 2) {
	pilB();
	}
}
}
void pilA() {
	int angka, jumlah, maks, min;
	
	cout << " 1. mencari nilai terkecil. (jumlah angka ditemukan)" << endl;
	cout << endl;
	cout << "masukan jumlah angka : "; cin >> jumlah;
	cout << endl;
	
	for (int i = 1; i <= jumlah; i++) {
	cout << "masukan angka : "; cin >> angka;
	
	if (i == 1) {
	jumlah;
	min = angka;
	maks = angka;
	}
	else if ( min > angka ) {
	min = angka;
	}
	}
	cout << endl;
	cout << "nilai terkecil : " << min << endl;
	cout << "jumlah : " << jumlah << endl;
	}

void pilB() {
	int angka, jumlah, maks, min;
	
	cout << " 1. mencari nilai terbesar. (jumlah angka ditemukan)" << endl;
	cout << endl;
	cout << "masukan jumlah angka : "; cin >> jumlah;
	cout << endl;
	
	for (int i = 1; i <= jumlah; i++) {
	cout << "masukan angka : "; cin >> angka;
	
	if (i == 1) {
	jumlah;
	min = angka;
	maks = angka;
	}
	else if ( maks < angka ) {
	maks = angka;
	}
	}
	cout << endl;
	cout << "nilai terbesar : " << maks << endl;
	cout << "jumlah : " << jumlah << endl;
	}