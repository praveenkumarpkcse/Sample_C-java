#include <stdio.h>

int main()
{
int n;
int a[100],temp;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(int j=0;j<n;j++)
{
    for(int k=j+1;k<n;k++)
    {
        if(a[j]>a[k])
        {
            temp=a[j];
            a[j]=a[k];
            a[k]=temp;
        }
    }
}
for(int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}
