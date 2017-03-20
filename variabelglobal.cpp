#include <iostream>
using namespace std;

//prototype
void prosesbaca(); 
int prosestambah();
int proseskurang ();
void prosestampil();

//variabel global
int a, b;

//programutama
int main () {
	prosesbaca();
	prosestampil();
	return 0;
	}

//prosesmembaca
void prosesbaca() {
	cout << " masukan A : ";
	cin >> a;
	cout << "masukan B : ";
	cin >> b;
}

//prosestambah
int prosestambah() {
return a + b;
}

//proseskurang
int proseskurang() {
	int hasil;
	hasil = a - b;
	return 0;
	}
	
//prosestampil
void prosestampil () {
	cout << "hasil tambah : " << prosestambah () <<endl;
	cout << proseskurang();
	}