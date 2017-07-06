#include <cstdlib>
#include <iostream>

using namespace std;

int main ( int argc, char *argv[])
{
	int r;
	float luas_lingkaran;
	
	cout << "PROGRAM UNTUK MENGHITUNG LUAS LINGKARAN" <<endl<<endl;
	cout << "masukan nilai jari-jari (r) = ";
	cin >> r;
	
	luas_lingkaran=(22/7)*r*r;
	
	cout << endl;
	cout << luas_lingkaran dengan jari-jari "<<r<<" adalah " << luas_lingkaran;
	cout << endl;
	return 0;
	}