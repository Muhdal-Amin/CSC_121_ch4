# CSC_121
C - How to program 8th edition by Paul Deitel and Harvey Deitel. Chapter 4, Exercises 4.17, 4.18, 4.19, 4.20

# Exercise 4.17 - Calculating Credit Limits
Collecting money becomes increasingly difficult during periods of recession, so companies may tighten their credit limits to prevent their accounts receivable (money owed to them) from becoming too large. In response to a prolonged recession, one company has cut it's customers' credit limits in half. Thus, if a particular customer had a credit limit of $2000, it's now $1000. If a customer had a credit limit of $5000, it's now $2500. Write a program that analyzes the credit status of three customers of this company. 

- For each customer, you're given:
    - The customer's account number
    - The customer's credit limit
    - The customer's current balance (i.e, the amount the customer owes the company).
 
 Your program should calculate and print the new credit limit for each customer and should determine (and print) which customers have current balances that exceed their new credits.

# Exercise 4.18 - Bar-Chart Printing Program
One interesting application of computers is drawing graphs and bar charts. Write a program that reads five numbers (each between 1 and 30). For each number read, your program should print a line containing that number of adjacent asterisks. For example, if your program reads the number seven, it should print *******.

# Exercise 4.19 - Calculating Sales
An online retailer sells five products whose retail prices are shown in the following table:

| Product Number| Retail Prices |
| :------------ | :------------:| 
| 1             | $2.98         |
| 2             | $4.50         |  
| 3             | $9.98         | 
| 4             | $4.49         |
| 5             | $6.87         |

- Write a program that reads a series of pairs of numbers as follows:
    - Product number
    - Quantity sold for one day
    
Your program should use a switch statement to help determine the retail price for each product.

Your program should calculate and display the total retail value of all products sold lastweek.

# Exercise 4.20 - Truth Tables
Complete the following truth tables by filling in each blank with 0 or 1.

| Condition 1| Condition 2| Condition 1 && Condition 2|
| :----------| :----------| :-------------------------|
| 0          | 0          | 0                         |
| 0          | nonzero    | 0                         | 
| nonzero    | 0          | 0                         |
| nonzero    | nonzero    | nonzero                   |


| Condition 1| Condition 2| Condition 1 \\\ Condition 2|
| :----------| :----------| :-------------------------|
| 0          | 0          | 0                         |
| 0          | nonzero    | nonzero                   | 
| nonzero    | 0          | nonzero                   |
| nonzero    | nonzero    | nonzero                   |


| Condition 1| !Condition 1|
| :----------| :-----------| 
| 0          | 1           |
| nonzero    | 0           | 
