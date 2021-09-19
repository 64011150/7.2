#include<stdio.h>
int main() {
	int x, a;
	scanf_s("%d", &x);
	for (a = 1; x >= a;a=a+1) {
		if (x == 2 * a) {
			printf_s("even number");
			break;
		}
	}
	for (a = 1; x >= a; a = a + 1) {
		if (x == 2 * a + 1) {
			printf_s("odd number");
			break;
		}
	}
	return 0;
}