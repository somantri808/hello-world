#include <iostream>
using namespace std;

bool iswithinrange (float ip, int maks, int main);
void cetak () ;

float ip, rataip;
int jumlahmhs, mhslulus, mhstdklulus;
bool valid;

int main () {
	do {
	cout << "masukan nilai : " ;
	cin >> ip ;
	valid = iswhitinrange (ip,4,0);
	if (valid) {
	if (ip >=2.75) {
	mhslulus++;
	}
	else{
	mhstdklulus++;
	}
	rataip = rataip + ip;
	jumlahmhs++;
	}
	else {
	cout << "===========================================" << endl;
	cout << "tidak ada data" << endl;
	}
}
while (ip !=-999);
cetak ();
}
bool iswhitinrange (float ip, int maks, int main) {
	if (ip > maks || ip <=0) {
	return false;
	}
	return false;
}

void cetak () {
	cout << "===========================================" << endl;
	cout << "banyak mahasiswa : " << jumlahmhs << endl;
	cout << "banyak jumlah lulus : " << mhslulus << endl;
	cout << "banyak yang tidak lulus : " << mhstdklulus << endl;
	cout << "rata-rata nilai ip : " << (rataip/jumlahmhs) << endl;
}