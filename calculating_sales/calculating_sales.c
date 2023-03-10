// Paul Dietel C-How to program: Chapter4, Exercise 4.19
// Program control in C

#include <stdio.h>

// Function main - Code entry point
int main(void){

	// Initialization phase
	// Variable declaration
	int productNumber;
	int quantity, day;
	float retailValue = 0;
	float retailValuePerDay = 0;
	float totalRetailValue = 0;

	// Processing phase

	for (day = 1; day <= 7; day++) {
		printf("DAY %d: \n", day);

		printf("Enter product number 1-5 or -1 to end:\n");
		scanf("%d", &productNumber); // Prompts user to input product number which leads program into a sentinel controlled while loop

		while (productNumber != -1) {

			switch (productNumber){

			case 1: printf("%s", "Enter quantity of product 1:\n");
				scanf("%d", &quantity);
				retailValue = retailValue + ( 2.98 * quantity );
				printf("retail value is $%.2f.\n\n", retailValue);
				break;

			case 2: printf("%s", "Enter quantity of product 2:\n");
				scanf("%d", &quantity);
				retailValue = retailValue + ( 4.50 * quantity );
				printf("retail value is $%.2f.\n\n", retailValue);
				break;

			case 3: printf("%s", "Enter quantity of product 3:\n");
				scanf("%d", &quantity);
				retailValue = retailValue + ( 9.98 * quantity );
				printf( "Total retail value is $%.2f.\n\n", retailValue);
				break;

			case 4: printf("%s", "Enter quantity of product 4:\n");
				scanf("%d", &quantity);
				retailValue = retailValue + ( 4.49 * quantity );
				printf( "retail value is $%.2f.\n\n", retailValue);
				break;

			case 5: printf("%s","Enter quantity of product 5:\n");
				scanf("%d", &quantity);
				retailValue = retailValue + ( 6.87 * quantity );
				printf( "retail value is $%.2f.\n\n", retailValue);
				break;

			default:
				printf( "Sorry, invalid product number entered!\n\n");
				break;

			} // End switch


			retailValuePerDay =+ retailValue;

			printf("Enter product number (1-5) or -1 to exit:\n");
			scanf("%d", &productNumber);

		} // End while

		if (productNumber == -1) { // ends the prompt for asking for products and ends with the total sales for the day

			printf("The total retail value for day %d is : %.2f\n\n" , day, retailValuePerDay);

		} // End if

	} // End for

	totalRetailValue += retailValuePerDay;

	printf ("\nThe total retail value for the past week is : %.2f\n", totalRetailValue);

} // End main function
