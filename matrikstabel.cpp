#include <iostream>
using namespace std;

int main () {
	int S [3][3];
	int S1 [3][3];
	int S2 [3][3];
		for  (int i=0; i<3; i++) {
			for (int j=0; j<3; j++) {
				cout << "S1 : masukan baris ke " << i << " kolom ke " << j <<" : ";
				cin >> S1 [i][j];
				cout << "S2 : masukan baris ke " << i << " kolom ke " << j <<" : ";
				cin >> S2 [i][j];
				S [i][j] = S1 [i][j] + S2 [i][j];
			}
		}
		
		//menampilkan data S1
		cout << "-----------" << endl;
		cout << "S1 "<<endl;
		cout << "           " << endl;
		for (int i=0; i<3; i++) {
			for (int j=0; j<3; j++) {
				cout << S1 [i][j] << " ";
			}
			cout << endl;
		}
		//menampilkan data S2
		cout << "-----------" << endl;
		cout << "S2 "<<endl;
		cout << "           " << endl;
		for (int i=0; i<3; i++) {
			for (int j=0; j<3; j++) {
				cout << S2 [i][j] << " ";
			}
			cout << endl;
		}
		//menampilkan data S
		cout << "-----------" << endl;
		cout << "S "<<endl;
		cout << "           " << endl;
		for (int i=0; i<3; i++) {
			for (int j=0; j<3; j++) {
				cout << S [i][j] << " ";
			}
			cout << endl;
		}
		cout << "-----------" << endl;
		return 0;
}