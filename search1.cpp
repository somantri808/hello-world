#include <iostream>
using namespace std;


int main () { 
	int X [10], cari;
	bool ketemu;

	for (int i = 0; i < 10; i++)
	{
		cout << "Masukkan data: ";
		cin >> X [i];
	}

	cout << "Masukkan data yang dicari: ";
	cin >> cari;

	for (int i = 0; i < 10; i++)
	{
		if (X[i] == cari )
		{
			ketemu = true;
			break;
		} else {
			ketemu = false;
		}
	}	

	if (ketemu == true){
		cout << "Data ditemukan" << endl;
	} else {
		cout << "Data tidak ditemukan" << endl;
	}


	return 0;
}