#include <stdio.h>

int main(void) {

	int number[5];
	int input;

	for (int i = 0; i < 5; i++) {

		printf("Enter number #%d: ", i+1);
		scanf("%d", &input);

		while(input < 1 || input > 30){
		puts("Input must be within 1-30!");
		printf("Enter number #%d: ", i+1);
		scanf("%d", &input);
		}
		number[i] = input;
	}
		puts("");
		puts("BAR CHART");

		for (int i = 0; i < 5; i++) {

			printf("%.2d:", number[i]);
			for (int j = 0; j < number[i]; j++) {

				printf("*");
			}

			puts("");
		}

	return(0);
}
