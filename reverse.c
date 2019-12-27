#include<stdio.h>
int main()
{
	int a,x=0,n;
	printf("enter a number");
	scanf("%d",&a);
	while (a!=0)
	{
		x=x*10;
		x=x+a%10;
		a=a/10;
	}
	printf("%d",x);
	return 0;
}
