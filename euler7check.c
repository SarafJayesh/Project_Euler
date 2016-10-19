#include <stdio.h>

int main(void)
{
  int n=0;        //The nth prime to be found
  int t=0;        //Number of test cases to be run
  int prime=0;    //Result
  int k=0;

  scanf("%d",&t);

  while(t>0)
  {
    scanf("%d",&n);
    if(n%2!=0)
    {
      k=(n-1)/2;
      prime=(6k-1);
      printf("%d\n",prime);
    }
    else
    {
      k=n/2;
      prime=(6k-5);
      printf("%d\n",prime);
    }
    t--;
  }
}
