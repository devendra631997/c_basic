#include<stdio.h>
int main()
{
int a,i=2;
printf("Enter any number");
scanf("%d",&a);
while(a!=i)
{
if(a%i==0)
{
printf("%d is not prime",a);
break;
}
else
{
i++;
}
}
if(a==i)
printf("%d is a prime",a);
return 0;
}
