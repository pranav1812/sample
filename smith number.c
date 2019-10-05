#include<stdio.h>
/*checks whether the entered number is smith number or not
A smith number is a number the sum of whose digits of prime factors = sum of its digits*/
int sdigs(int p)
{// function to find sum of digits of prime factors
    int s=0;
   while(p>0)
    {
      s+=p%10;
      p/=10;
    }
    return s;
}
int checkprime(int x)
{// function to check primes
  int t=1;
  for(int i=2;i<=x/2;i++)
  {
    if(x%i==0)
    return 0;

  }
  return t;
}
int main()
{
  int n;
  scanf("%d",&n);
  for (int i=0;i<n;i++)
  {
    long x,p=0;
    int sum1=0,sum2=0;
    scanf("%ld",&x);
    p=x;
    while(p>0)
    {
      sum2+=p%10;
      p/=10;
    }
    if(checkprime(x)==0)
    {
        long a=x;
        for(int j=2;j<=a/2;j++)
    {
      if(checkprime(j)==1)
      {

        while(x%j==0)
        {
          sum1+=sdigs(j);
          x/=j;// new value of x has to be stored

        }
      }
    }
    if(sum1==sum2)
    printf("1  \n");
    else
    printf("0   n",sum1 ,sum2);
    }
    else printf("0 \n");

  }
}


