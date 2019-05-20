#include <stdio.h>

int main()
{
   int n,a,d,s;
   scanf("%d%d%d",&n,&a,&d);
   s=(((2*a)+((n-1)*d)))/2*n;
   
   printf("%d",s);
}
