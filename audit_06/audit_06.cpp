#include "stdafx.h"
using namespace std;
int main() {
	int a, b, c;
	printf("a=");
	cin >> a;
	printf("b=");
	cin >> b;
	printf("c=");
	cin >> c;;
	if (a + b <= c || a + c <= b || b + c <= a)
		printf("unreal\n");
	else
		if (a != b && a != c && b != c)
			printf("Raznostoronniy\n");
		else
			if (a == b && b == c)
				printf("Ravnostoronniy\n");
			else
				printf("Ravnobedreniy\n");
	return 0;
}

