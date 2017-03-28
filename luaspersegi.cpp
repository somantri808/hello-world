#include <iostream>
using namespace std;

int main() {
	int s;
	float luas_persegi;
	
	cout << "PROGRAM UNTUK MENGHITUNG LUAS PERSEGI" <<endl;
	cout << "masukan nilai sisi (s) = ";
	cin >> s;
	
	luas_persegi=s*s;
	
	cout << endl;
	cout << "luas persegi dengan sisi "<<s<<" adalah " << luas_persegi;
	cout <<endl<<endl;
	return 0;
}