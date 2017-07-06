#include <iostreaam>
#include <iomanip>
using namespace std;

struct mahasiswa {
	char NIM[11];
	char NAMA[30];
	float NILAI;
};

typedef mahasiswa mahasiswaArr[50];
	int jumlahmahasiswa, pilihan;
	mahasiswaArr x;
	while (pilihan != 5) {
		cout << "______________________________________________________";
		cout << "MENU INPUT DATA MAHASISWA\n";
		cout << "1. masukan data\n";
		cout << "2. lihat data\n";
		cout << "3. tampilkan rata_rata\n";
		cout << "4. tampilkan mahasiswa dengan nilai tertinggi dan terendah\n";
		cout << "5. keluar\n";
		cout << "______________________________________________________";
		cin >> pilihan;
		if (pilihan == 1) {
			cout << "masukan jumlah mahasiswa = ";
			cin >> jumlahmahasiswa;
			for (int i = 0; i < jumlahmahasiswa; i++) {
			cout << "mahasiswa ke " << i + 1;
			cout << "\nNIM : ";
			cin >> x [i] .NIM;
			cout << "NAMA : ";
			cin >> x [i] .NAMA;
			cout << "NILAI : ";
			cin >> x [i] .NILAI;
			cout << endl;
		}