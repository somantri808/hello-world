#include <iostream>
using namespace std;
//prototype
int tambahkan (int a, int b);
//program utama
int main () {
// variabel
int a, b, temp;
// proses membaca
cout << "masukan nilai a : ";
cin >> a;
cout << "masukan nilai b : ";
cin >> b;
cout << "hasil : " << tambahkan (a, b) << endl;
return 0;
}
int tambahkan (int a, int b) {
return a + b;
}