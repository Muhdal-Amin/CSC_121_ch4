// Paul Dietel C-how to program: Chapter4, Exercise 4.18
// Program control in C

#include <stdio.h>

// Function main - Code entry point
int main(void) {

	// Initialization phase
	// Variables declaration
	int a,b,c,d,e,f;

	// Processing Phase 1
	printf("%s","Enter a number between 1 and 30: ");
	scanf("%d", &b);

	if (b <= 30) {

		for(a = 1; a <= b; a++) {
			printf("*\t");
		}
	}

	else {
		printf("Value out of range!\n");
	}

	// Processing Phase 2
	printf("%s","\n\nEnter a number between 1 and 30: ");
	scanf("%d", &c);

	if (c <= 30) {

		for(a = 1; a <= c; a++) {
			printf("*\t");

		}
	}

	else {
		printf("Value out of range!\n");
	}

	// Processing Phase 3
	printf("%s","\n\nEnter a number between 1 and 30: ");
	scanf("%d", &d);

	if (d <= 30) {

		for(a = 1; a <= d; a++) {
			printf("*\t");

		}
	}

	else {
		printf("Value out of range!\n");
	}

	// Processing Phase 4
	printf("%s","\n\nEnter a number between 1 and 30: ");
	scanf("%d", &e);

	if (e <= 30) {

		for(a = 1; a <= e; a++) {
			printf("*\t");

		}
	}

	else {
		printf("Value out of range!\n");
	}

	// Processing Phase 5
	printf("%s","\n\nEnter a number between 1 and 30: ");
	scanf("%d", &f);

	if (f <= 30) {

		for(a = 1; a <= f; a++) {
			printf("*\t");

		}
	}

	else {
		printf("Value out of range!\n");
	}

} // End function main
