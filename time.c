#include <stdio.h>

int main()
{
int min,count=0;
scanf("%d",&min);
while(min>=60)
{
count++;
min=min-60;
}
printf("%d %d",count,min);
    
}
