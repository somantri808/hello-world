#include <iostream>
using namespace std;

//prototype
void prosesbaca();
void prosestukar();
void prosestampil();

// variabel global
	int a, b, temp;

//program utama
int main () {
	prosesbaca();
	prosestukar();
	prosestampil();
	return 0;
	}

//proses membaca
void prosesbaca () {
	cout << "masukan nilai a : ";
	cin >> a;
	cout << "masukan nilai b : ";
	cin >> b;
}

//proses tukar
void prosestukar () {
	temp = b;
	b = a;
	a = temp;
}

//proses tampil
void prosestampil () {
	cout << "==================" << endl;
	cout << "nilai a sekarang : " << a << endl;
	cout << "nilai b sekarang : " << b;
}