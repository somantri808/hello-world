#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct {
	int tanggal;
	string bulan;
	string tahun;
}tanggal;

typedef struct {
	int menit;
	int jam;
}jam;

typedef struct {
	string namadepan;
	string namabelakang;
	string KTP/SIM/PASPOR;
	string alamat;
}datapelanggan;

typedef struct {
	string kodebooking;
	int noKA;
	string namaKA;
	string kelas;
	string kursi;
	datapelanggan datadiri;
	string kotaasalKA;
	tanggal tanggalberangkat;
	jam jamberangkat;
	string kotatujuanKA;
	tanggal tanggaltiba;
	jam jamtiba;
	int bayar;
	int operator;
	int tandabayar;
}jadwalKA;

//variable global
	jadwalKA;
	int asal, tujuan, a,k,n;
	
//prototype
void keterangankereta();
void detailpemesanan();
void datapelanggan();
void asal();
void tujuan();
void berangkat();
void tiba();

int main () {
	system("cls");
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "PEMESANAN TIKET KERETA API" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	
	//data diri
	datapelanggan();
	//keterangan kereta
	keterangankereta();
	
	//asal
	asal();
	//keberangkatan
	berangkat();
	//tujuan
	tujuan();
	//tiba
	tiba();
	//detail pemesanan
	detailpemesanan();
	return 0;
}

void datapelanggan(){
	cout << "\nmasukan data dibawah ini : \n" << endl;
	cout << "nama depan : ";
	cin >> A.datadiri.namadepan;
	cout << "nama belakang : ";
	cin >> A.datadiri.namabelakang;
	cout << " no KTP/SIM/PASPOR : ";
	cin >> A.datadiri.KTP/SIM/PASPOR : ";
	cout << "alamat : ";
	cin >> A.datadiri.alamat;
	cout << endl;
	cout << "------------------------------------------------------------------------------" << endl;
}
void ketKereta(){
	
	// No KA 
	A.noKA = 108;
	A.kodeBooking = "26ss081";
	A.namaKA = "gatot kaca";
	A.kursi = "08s";

	cout << "\nPilih Kelas :  " << endl;
	cout << "1. express" << endl;
	cout << "2. ekonomi" << endl << endl;
	cout << "Masukkan Pilihan Anda : ";
	cin >> k;
	
	if (k == 1 ){
		A.kelas = "express";
	} else if(k == 2){
		A.kelas = "ekonomi";
	}else{
		cout << "Tidak ada Pilihan";
	}
	
	cout << endl;
	cout << "---------------------------------------------------" << endl;
}

void Asal(){
	cout << "Stasiun Asal : " << endl << endl;
	cout << "1. Bandung(bd)" << endl;
	cout << "2. Madura(md)" << endl;
	cout << "3. cirebon(cb)" << endl << endl;
	cout << "Masukkan Pilihan Anda : ";
	cin >> asal;
	
	if (asal == 1 ){
		A.kotaAsalKA = "Bandung(bd)";
	} else if(asal == 2){
		A.kotaAsalKA = "Madura(md)";
	}else if(asal == 3){
		A.kotaAsalKA = "Cirebon(cb)";
	}else{
		cout << "Tidak ada Pilihan";
	}
}
void berangkat(){
	int brngkt;
	cout << "\nKeberangkatan" << endl;
	cout << "Masukkan tanggal(dd) : ";
	cin >> A.tglBerangkat.tgl;
	cout << "Masukkan Bulan (mm): ";
	cin >> A.tglBerangkat.bulan;
	cout << "Masukkan Tahun (yyyy): ";
	cin >> A.tglBerangkat.tahun;
	
	cout << endl;
	cout << "Waktu Keberangkatan : " << endl << endl;
	cout << "1. 08:30" << endl;
	cout << "2. 12:00" << endl;
	cout << "3. 17:30" << endl;
	cout << "4. 21:00" << endl << endl;
	cout << "Masukkan Pilihan Anda : ";
	cin >> brngkt;
	
	if (brngkt == 1 ){
		A.jamBerangkat.jam =  08;
		A.jamBerangkat.menit = 30;
	} else if(brngkt == 2){
		A.jamBerangkat.jam =  12;
		A.jamBerangkat.menit = 00;
	}else if(brngkt == 3){
		A.jamBerangkat.jam =  17;
		A.jamBerangkat.menit = 30;
	}else if(brngkt == 4){
		A.jamBerangkat.jam =  21;
		A.jamBerangkat.menit = 00;
	}else{
		cout << "Tidak ada Pilihan";
	}
}
void Tujuan(){
	cout << "Stasiun Tujuan : " << endl << endl;
	cout << "jakarta(jk)" 1. " << endl;
	cout << "yogyakarta(yk)" 2. " << endl;
	cout << "surabaya(sb)" 3. " << endl << endl;
	cout << "Masukkan Pilihan Anda : ";
	cin >> tujuan;
	
	if (tujuan == 1 ){
		A.kotaTujuanKA =  "jakarta(jk)";
	} else if(tujuan == 2){
		A.kotaTujuanKA =  "yogyakarta(yk)";
	}else if(tujuan == 3){
		A.kotaTujuanKA =  "surabaya(sb)";
	}else{
		cout << "Tidak ada Pilihan";
	}
}
void tiba(){
	if(k == 1 ){
		if (asal == 1){
			if(tujuan == 1){
				A.jamTiba.jam = A.jamBerangkat.jam + 9;
				A.bayar = 440000;
			}else if(tujuan == 2){
				A.jamTiba.jam = A.jamBerangkat.jam + 4;
				A.bayar = 220000;
			}else if(tujuan == 3){
				A.jamTiba.jam = A.jamBerangkat.jam + 3;
				A.bayar = 110000;
			}else{
				cout << "Error 1" << endl;
			}
		}else if(asal == 2){
			if(tujuan == 1){
				A.jamTiba.jam = A.jamBerangkat.jam + 5;
				A.bayar = 210000;
			}else if(tujuan == 2){
				A.jamTiba.jam = A.jamBerangkat.jam + 6;
				A.bayar = 260000;
			}else if(tujuan == 3){
				A.jamTiba.jam = A.jamBerangkat.jam + 4;
				A.bayar = 180000;
			}else{
				cout << "Error 2" << endl;
			}
		}else if(asal == 3){
			if(tujuan == 1){
				A.jamTiba.jam = A.jamBerangkat.jam + 3;
				A.bayar = 190000;
			}else if(tujuan == 2){
				A.jamTiba.jam = A.jamBerangkat.jam + 5;
				A.bayar = 250000;
			}else if(tujuan == 3){
				A.jamTiba.jam = A.jamBerangkat.jam + 8;
				A.bayar = 390000;
			}else{
				cout << "Error 3" << endl;
			}
		}else{
			cout << "Masukkan Pilihan yang benar" << endl;
		}
	}else if( k == 2){
		if (asal == 1){
			if(tujuan == 1){
				A.jamTiba.jam = A.jamBerangkat.jam + 9;
				A.bayar = 280000;
			}else if(tujuan == 2){
				A.jamTiba.jam = A.jamBerangkat.jam + 4;
				A.bayar = 170000;
			}else if(tujuan == 3){
				A.jamTiba.jam = A.jamBerangkat.jam + 3;
				A.bayar = 100000;
			}else{
				cout << "Error 1" << endl;
			}
		}else if(asal == 2){
			if(tujuan == 1){
				A.jamTiba.jam = A.jamBerangkat.jam + 5;
				A.bayar = 170000;
			}else if(tujuan == 2){
				A.jamTiba.jam = A.jamBerangkat.jam + 6;
				A.bayar = 180000;
			}else if(tujuan == 3){
				A.jamTiba.jam = A.jamBerangkat.jam + 4;
				A.bayar = 140000;
			}else{
				cout << "Error 2" << endl;
			}
		}else if(asal == 3){
			if(tujuan == 1){
				A.jamTiba.jam = A.jamBerangkat.jam + 3;
				A.bayar = 85000;
			}else if(tujuan == 2){
				A.jamTiba.jam = A.jamBerangkat.jam + 5;
				A.bayar = 160000;
			}else if(tujuan == 3){
				A.jamTiba.jam = A.jamBerangkat.jam + 8;
				A.bayar = 140000;
			}else{
				cout << "Error 3" << endl;
			}
		}else{
			cout << "Masukkan Pilihan yang benar" << endl;
		}
	}else{
		A.bayar = 0;
	}	
	
	
	if (A.jamTiba.jam < 24){
		A.tglTiba.tgl = A.tglBerangkat.tgl;
		A.tglTiba.bulan = A.tglBerangkat.bulan;
		A.tglTiba.tahun = A.tglBerangkat.tahun;
	}else{
		A.tglTiba.tgl = A.tglBerangkat.tgl + 1;
		A.tglTiba.bulan = A.tglBerangkat.bulan;
		A.tglTiba.tahun = A.tglBerangkat.tahun;
	}
	A.jamTiba.menit = A.jamBerangkat.menit;
	A.admin = 7500;
	
	A.tBayar = A.admin + A.bayar;
	
}

void detailPesanan(){
	system("cls");
	cout << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "	Detail Pemesanan Tiket KA " << endl;
	cout << "---------------------------------------------------" << endl;
	cout << endl;
	cout << "Kode Booking    : " << A.kodeBooking << endl;
	cout << "No Kereta Api   : " << A.noKA << endl;
	cout << "Nama Kereta Api : " << A.namaKA << endl;
	cout << "Kelas / Kursi   : " << A.kelas << " / " << A.kursi  << endl << endl;
	cout << "Berangkat 	: " << A.kotaAsalKA << endl;
	cout << "		  " << A.tglBerangkat.tgl << "-" << A.tglBerangkat.bulan << "-" << A.tglBerangkat.tahun << " " << A.jamBerangkat.jam << ":" << A.jamBerangkat.menit << " WIB" << endl;
	cout << "Tiba 		: " <<  A.kotaTujuanKA << endl;
	cout << "		  " << A.tglTiba.tgl << "-" << A.tglTiba.bulan << "-" << A.tglTiba.tahun << " " << A.jamTiba.jam << ":" << A.jamTiba.menit << " WIB" << endl;
	cout << "---------------------------------------------------" << endl << endl;
	cout << "Nama   		: " << A.dataDiri.namaD << " " << A.dataDiri.namaB << endl;
	cout << "No KTP   	: " << A.dataDiri.ktp << endl;
	cout << "Alamat 		: " << A.dataDiri.alamat << endl;
	cout << "---------------------------------------------------" << endl << endl;
	cout << "Jumlah Bayar 	: Rp. " <<  A.bayar << endl;
	cout << "Biaya Admin 	: Rp. " <<  "  " << A.admin << endl;
	cout << "		  ------------ +" <<  endl;
	cout << "Total Bayar 	: Rp. " <<  A.tBayar << endl;
}