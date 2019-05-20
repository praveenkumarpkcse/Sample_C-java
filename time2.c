#include <stdio.h>

int main()
{
int hr1,hr2;
int min1,min2;
int hrs,mins,temp=0,temp1=0;
scanf("%d%d%d%d",&hr1,&min1,&hr2,&min2);
if(hr1<hr2)
{
    temp=hr1;
    hr1=hr2;
    hr2=temp;
}
if(min1<min2)
{
    temp1=min1;
    min1=min2;
    min2=temp1;
}
hrs=hr1-hr2;
mins=min1-min2;
printf("%d %d",hrs,mins);
}
