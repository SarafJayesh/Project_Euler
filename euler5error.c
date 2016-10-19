#include <stdio.h>
#include <math.h>

int prime(int a);   //To get prime of a number

int main(void)
{
  int t=0;          //Number of test cases
  int n=0;          //Number upto which divisibility is required
  int required=1;
  int i,j;

  scanf("%d",t);
  while(t>0)
  {
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
      if(required%i!=0)
      {
        required*=prime(i);
      }
    }
    printf("%d\n",required);
    required=0;
    t--;
  }
}

int prime(int a)
{
  int result;
  int k;
  for(k=2; k<sqrt(a); k++)
  {
    if(a%k==0)
    {
      result=k;
      break;
    }
  }
  return result;
}
