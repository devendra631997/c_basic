
#include<stdio.h>
int main()
{
	int a,c=0,i,b;
	printf("Enter a number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b=a%i;
		if(b==0)
			c=c+i;
}
printf("%d",c);
if(c==(a/2))
	printf("%d is perfect number",a);
	else
	printf("%d is not a perfect number",a);
	}
