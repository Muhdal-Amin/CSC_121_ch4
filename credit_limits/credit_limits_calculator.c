// Paul Dietel C-how to program: Chapter4, Exercise 4.17
// Program control in C

#include <stdio.h>

// Function main - Code entry point
int main(void) {

	// Initialization phase
	// Variable declaration
	int credit_limit, credit_balance, new_credit_limit, customer;
	int acct_num[5];
	int customer_num;
	for (customer = 1; customer <= 3; customer++) {

		for(customer_num =1; customer_num <= 3; customer++)
		{
			printf("Enter customer #%d details\n", customer_num++);

                        // Prompt user to input values
			printf("%s", "Customer's account number: ");
			scanf("%d", &acct_num[customer]);

			printf("%s", "Credit limit before recession: $");
			scanf("%d", &credit_limit);

			printf("%s", "Customer's credit balance: $");
			scanf("%d", &credit_balance);

			// Calculation phase
			new_credit_limit = credit_limit / 2;

			if (credit_balance > new_credit_limit) {

				printf("New credit limit is: $%d\n", new_credit_limit);
				printf("Current credit balance is: $%d and exceeds the new credit limit\n\n", credit_balance);

			} // End if

			else {

				printf("New credit limit is: $%d\n", new_credit_limit);
				printf("Current customer's balance is: $%d and does not exceed the new credit limit\n\n", credit_balance);
			} // End else

		} // End nested for

	} // End for


}// End man function
