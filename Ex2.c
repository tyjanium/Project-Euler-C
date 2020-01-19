// Find the sum of the even valued Fibonacci suequence numbers up to 4E6
// (4,000,000)
#include <stdio.h>

unsigned long int sum_of_even_Fibonacci_numbers(unsigned long int n)
{
   if (n <= 0)
      return 0;

   int fibonacci[n + 1];
   fibonacci[0] = 0, fibonacci[1] = 1;

   unsigned long int sum = fibonacci[0] + fibonacci[1];

   for (int i = 2; i <= n; i++)
   {
      fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
      sum += fibonacci[i];
   }

   return sum / 2;
}

int main()
{
   unsigned long int n;
   printf("\nEnter the number of Fibinacci terms: ");
   scanf("%lu", &n);
   printf("Sum of even terms: %lu", sum_of_even_Fibonacci_numbers(n));

   printf("\n\n");
   return 0;
}
