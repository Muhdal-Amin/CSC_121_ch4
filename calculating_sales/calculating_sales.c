// Paul Dietel C-How to program: Chapter4, Exercise 4.19
// Program control in C

#include <stdio.h>

// Function main - Code entry point
int main(void){

	// Initialization phase
	// Variable declaration
	int productNumber;
	int quantity;
	float total;
	total = 0;

	// Processing phase
	printf("Enter product number 1-5 or -1 to end.\n");
	scanf("%d", &productNumber); // Prompts user to input product number which leads program into a sentinel controlled while loop
	while (productNumber != -1) {

		switch (productNumber){

		case 1: printf("%s", "Enter quantity of product 1.\n");
			scanf("%d", &quantity);
			total = (float) total + ( 2.98 * quantity );
			printf("Total retail value is $%.2f.\n\n", total);
			break;

		case 2: printf("%s", "Enter quantity of product 2.\n");
			scanf("%d", &quantity);
			total = (float) total + ( 4.50 * quantity );
			printf("Total retail value is $%.2f.\n\n", total);
			break;

		case 3: printf("%s", "Enter quantity of product 3.\n");
			scanf("%d", &quantity);
			total =(float) total + ( 9.98 * quantity );
			printf( "Total retail value is $%.2f.\n\n", total);
			break;

		case 4: printf("%s", "Enter quantity of product 4.\n");
			scanf("%d", &quantity);
			total =(float) total + ( 4.49 * quantity );
			printf( "Total retail value is $%.2f.\n\n", total);
			break;

		case 5: printf("%s","Enter quantity of product 5.\n");
			scanf("%d", &quantity);
			total =(float) total + ( 6.87 * quantity );
			printf( "Total retail value is $%.2f.\n\n", total);
			break;

		default:
			printf( "Sorry, invalid product number entered!\n\n");

		} // End switch

		printf( "Enter product number (1-5) or -1 to exit.\n");
		scanf("%d", &productNumber);

	} // End while

	if (productNumber == -1) { // ends the prompt for asking for products and ends with the total sales of the past week

		printf("The total sales for the past week is $%.2f\n", total*7);

	} // End if

	return (0);

} // End main function
