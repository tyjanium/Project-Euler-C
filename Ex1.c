/* This program will find the sum of all multiples of two numbers up to a
number */
#include <stdio.h>

/* Declare function that takes an input number (n) and two
numbers (i and j) as parameters, and returns an int type value that is the
sum of all multiples of the two numbers up to n */
int sum_of_multiples(int n, int i, int j)
{
   // Declare and initialize variable for sum of multiples
   int answer = 0;
   for(int k = 0; k < n; k++)
   {
      if(k % i == 0 || k % j == 0)
         answer += k;
   }
   return answer;
}

int main()
{
   // Declare three int type variables
   int n, i, j;
   printf("\nThis program will find the sum of multiples of %d numbers\n\n", 2);
   // Read and store input for number 1
   printf("Enter number 1: ");
   scanf("%d", &i);
   // Read and store input for number 2
   printf("Enter number 2: ");
   scanf("%d", &j);
   // Read and store input for max number
   printf("Enter the max number: ");
   scanf("%d", &n);
   // Print user's selections
   printf("\nYou selected %d, %d, and, %d respectively", i, j, n);
   // Call sum_of_multiples function
   printf("\n\nThe sum of mutiples is %d", sum_of_multiples(n, i, j));

   printf("\n\n");
   return 0;
}
