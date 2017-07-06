#include <iostream>
using namespace std;

void numberfunction (int i) {
cout << "the number is : " << i << endl;
}

int main () {
	for (int i=0; i<10; i++) {
	numberfunction (i);
	}
	return 0;
}