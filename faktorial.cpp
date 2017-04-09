#include <iostream>
using namespace std;
int factorialfunction (int n);
int factorial = 1;
int main () {
	unsigned int n;
	cout << "positif integer : ";
	cin >> n;
	cout << "factorial of " << n << " = " << factorialfunction (n);
	return 0;
}
int factorialfunction (int n) {
	for (int i = 1; i <=n; ++i)
	{
	factorial *= i;
	}
	return factorial;
}