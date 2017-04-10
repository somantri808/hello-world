#include <iostream>
using namespace std;

typedef struct {
	string hari;
	string bulan;
	string tahun;
} tanggal;

typedef struct {
	int jam;
	int menit;
	int detik;
} jam;

typedef struct {
	int noKA;
	string kotaasalKA;
	jam jamberangkatKA;
	tanggal tanggalberangkatKA;
	string kotatujuanKA;
	jam jamtibaKA;
	tanggal tanggaltibaKA;
} jadwalKA;

int main () {
	jadwalKA jadwalKeretaApi;
	
	jadwalKeretaApi.noKA = 2;
	jadwalKeretaApi.kotaasalKA = "bandung";
	jadwalKeretaApi.jamberangkatKA.jam = 9;
	jadwalKeretaApi.jamberangkatKA.menit = 30;
	jadwalKeretaApi.jamberangkatKA.detik = 30;
	jadwalKeretaApi.tanggalberangkatKA.hari = "senin";
	jadwalKeretaApi.tanggalberangkatKA.bulan = "mei";
	jadwalKeretaApi.tanggalberangkatKA.tahun = "2017";
	jadwalKeretaApi.kotatujuanKA = "surabaya";
	jadwalKeretaApi.jamtibaKA.jam = 9;
	jadwalKeretaApi.jamtibaKA.menit = 30;
	jadwalKeretaApi.jamtibaKA.detik = 30;
	jadwalKeretaApi.tanggaltibaKA.hari = "selasa";
	jadwalKeretaApi.tanggaltibaKA.bulan = "mei";
	jadwalKeretaApi.tanggaltibaKA.tahun = "2017";
	
	cout << "no kereta : " << jadwalKeretaApi.noKA << endl;
	cout << jadwalKeretaApi.kotaasalKA << endl;
	cout << jadwalKeretaApi.jamberangkatKA.jam << " : " << jadwalKeretaApi.jamberangkatKA.menit << " : " << jadwalKeretaApi.jamberangkatKA.detik << endl;
	cout << jadwalKeretaApi.tanggalberangkatKA.hari << " - " << jadwalKeretaApi.tanggalberangkatKA.bulan << " - " << jadwalKeretaApi.tanggalberangkatKA.tahun << endl;
	cout << jadwalKeretaApi.kotatujuanKA << endl;
	cout << jadwalKeretaApi.jamtibaKA.jam << " : " << jadwalKeretaApi.jamtibaKA.menit << " : " << jadwalKeretaApi.jamtibaKA.detik << endl;
	cout << jadwalKeretaApi.tanggaltibaKA.hari << " - " << jadwalKeretaApi.tanggaltibaKA.bulan << " - " << jadwalKeretaApi.tanggaltibaKA.tahun << endl;
	return 0;
}