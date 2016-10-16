/*Problem Statement:
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/

/*The palindorme is a 6 digit number which can be written as abccba and equals to:
100000a + 10000b + 1000c + 100c +10b + a = 100001a + 10001b +1001c = 11(9091a + 910b + 100c) = m*n
where a,b and c are single digit and m, n are 3 digit integers.
Also, 11*10 < m < 11*90 */

#include <stdio.h>
int main(void)
{
  int a,b,c,result,num = 0;
  for(int a=9; a>=1; a--)
    {for(int b=9; b>=0; b--)
      {for(int c=9; c>=0; c--)
         {num = 9091 * a + 910 * b + 100 * c;
         for(int divider=90; divider>=10; divider--)
	         {if((num % divider) == 0)                      //look for divider that can divide
	           {if((num / divider) > 999)                   //and also doesn't make n > 999
	             {break;}
	            else
	             {result = num * 11;}                       //Found it!
	           }
            else
               {break;}
           }
          }
       }
     }
}
