// this program calculate even numbers, until the even numbers beat the number
// that the user prompted in the terminal.

#include <stdio.h>

int main() {
	int i = 0;
		printf("Write a number: ");
		scanf("%d", &i);
		for (int b = 0; b <= i; b++) {
			if (b % 2 == 0) {
				printf("%d is EVEN", b);
			}else {
				printf("\n");
			}
		}
}
