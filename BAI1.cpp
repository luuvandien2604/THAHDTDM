#include <stdio.h>

int isMultipleOf7(int num) {
	return (num >= 10 && num <= 99 && num % 7 == 0);
}

int main() {
	printf("Cac so nguyen co 2 chu so va la boi cua 7:\n");
	for (int i = 10; i <= 99; i++) {
		if (isMultipleOf7(i)) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}
