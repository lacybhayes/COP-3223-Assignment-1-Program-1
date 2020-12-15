/* Lacy H
Intro to C
9.9.20
Assignment 1 */

// this program will find the sum and average of 5 numbers

#include <stdio.h>
int main() {
	
// defining 5 variables of long int
 int long num_one, num_two, num_three, num_four, num_five;

// defining variables for the sum and average
 int num_sum;
 double num_average;
 
// asking user for input and outputting it for each variable 1-5
 printf("Input a whole number: ");
 scanf("%d", &num_one);
 printf("You entered: %d \n", num_one);
 printf("Input a whole number: ");
 scanf("%d", &num_two);
 printf("You entered: %d \n", num_two);
 printf("Input a whole number: ");
 scanf("%d", &num_three);
 printf("You entered: %d \n", num_three);

 printf("Input a whole number: ");
 scanf("%d", &num_four);
 printf("You entered: %d \n", num_four);

 printf("Input a whole number: ");
 scanf("%d", &num_five);
 printf("You entered: %d \n", num_five);

// outputting the sum of the variables
 num_sum = num_one + num_two + num_three + num_four + num_five;
 printf("The sum of the numbers you entered is: %d \n", num_sum);
 
// outputting the average of the variables 
 num_average = (float)(num_sum / 5.00);
 printf("The average is: %.2f", num_average);

return 0;
}
