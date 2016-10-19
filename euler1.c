/*Problem Statement:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.*/

#include <stdio.h>

int main(void)
{
  unsigned long long int sum=0;
  unsigned long int t=0;           //Number of test cases
  unsigned long long int n=0;      //Number upto which sum is required

  scanf("%lu",&t);
  for(int i=0; i<t; i++)
    {
      scanf("%llu",&n);
      for(int j=3; j<n; j++)
        {
         if(j%3==0 || j%5==0)
         sum = sum+j;
        }
        printf("%llu\n",sum);
        sum=0;
    }
}
