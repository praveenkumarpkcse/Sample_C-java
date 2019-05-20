#include <stdio.h>

int main()
{
 int no;
 scanf("%d",&no);
 int a[100];
 for(int i=0;i<no;i++)
 {
     scanf("%d",&a[i]);
 }
 for(int j=0;j<no;j++)
 {
     printf("%d %d\n",a[j],j);
 }
}
