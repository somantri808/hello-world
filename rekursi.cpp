#include <iostream>
using namespace std;

void numberfunction (int i) {
cout << "the number is : " << i << endl;
//penghenti
if (i<10) {
numberfunction (i);
}
}

int main () {
int i=0;
numberfunction(i);
return 0;
}