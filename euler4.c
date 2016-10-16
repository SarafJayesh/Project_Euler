/*Problem Statement:
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/

//Solved by checking for palindromes starting from from 999*999.

#include <stdio.h>
int main(void)
{  int i,j;
   long int temp=0;
   long int reverse=0;
   long int maxpalin=0;
   long int original=0;

   for(i=999; i>100; i--)
    {for(j=999; j>100; j--)
      {original=i*j;
       temp=original;
       while( temp!=0 )                                 //Check for palindrome
         {reverse=(reverse*10) + (temp%10);
          temp=temp/10;}
       if(original==reverse)
       {break;}                                         //As the largest palindrome is obtained
       reverse=0;
      }
    if(reverse==original && reverse>maxpalin)
      {maxpalin=original;}
    }
    printf("%ld\n",maxpalin);
}
