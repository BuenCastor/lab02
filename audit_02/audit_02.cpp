#include "stdafx.h"
 using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int max = a > b ? a : b;
	int min = a < b ? a : b;
	int min1 = c < min ? c : min;
	int max1 = c > max ? c : max;
	printf("max:%d, min:%d\n", max1, min1);
	system("pause");
    return 0;
}