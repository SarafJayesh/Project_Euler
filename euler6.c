/*Problem Statement:
The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is
(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

//Can also be solved by directly applying the formulas, but well..

#include <stdio.h>
#include <math.h>

int main(void)
{
  int i;
  unsigned long int sum1=0;                 //Sum of square of numbers
  unsigned long int sum2=0;                 //Sum of numbers
  unsigned long int difference=0;

  for(i=1; i<=100; i++)
  {
    sum1+=i*i;
  }
  for(i=1; i<=100; i++)
  {
    sum2+=i;
  }
  difference =(sum2*sum2)-sum1;
  printf("%lu",difference);
}
