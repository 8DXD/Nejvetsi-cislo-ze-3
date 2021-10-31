#include <stdio.h>

int main()
{
	int a = 4, b = 2, c = 3;
	printf("Jsou dana cisla %d, %d a %d\n", a, b, c);
	int max;
	if (a == b) {
		max = a;
	}
	else {
		if (a > b) {
			max = a;
		}
		else {
			max = b;
		}
	}
	if (max == c) {
		printf("  Nejvetsi z nich je %d\n", max);
	}
	else {
		if (max > c) {
			printf("  Nejvetsi z nich je %d\n", max);
		}
		else {
			printf("  Nejvetsi z nich je %d\n", c);
		}
	}
}