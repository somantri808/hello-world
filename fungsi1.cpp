#include <iostream>
using namespace std;
int HITUNG (int A, int B);
void main () {
int A,B,T;
A=8;
B=8;
T=0;
T = HITUNG (A,B);
printf ("\n %d",T);
}

int HITUNG (int A, int B)
{ int T;
A=A*10;
B=B*2;
T=A+B;
return (T);
}