#include <stdio.h>

int main()
{
int n;
int a[100],min;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(int j=0;j<n;j++)
{
    if(a[j]<min)
    {
        min=a[j];
    }
    
}
printf("%d",min);
}
