#include "stdafx.h"
using namespace std;

long double fact(int N)
{
	if (N < 0)
		return 0;
	if (N == 0)
		return 1;
	else
		return N * fact(N - 1);
}

int main()
{
	int N;
	cout << "Enter number ";
	cin >> N;
	cout << "Factorial " << N << " = " << fact(N) << endl << endl;
	return 0;
}
