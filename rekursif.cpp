#include <iostream>
using namespace std;

void rekursi (char n) {
n++;
cout << n << endl;
if (n<20 ) {
rekursi (n);
}
}
main () {
rekursi (0);
}