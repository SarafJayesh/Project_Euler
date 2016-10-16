/*Problem Statement:
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?*/

//Solved by prime factor method until the largest remained.
#include <stdio.h>
#include <math.h>
int main(void)
{
unsigned long long int i=0;
unsigned long long int n=600851475143;
while(n%2==0)
{n=n/2;}
for(i=3; i<sqrt(n); i+=2)
  {while(n%i==0)
    {n=n/i;}
  if(n==i)
    {break;}
  }
printf("%lu",n);
}
