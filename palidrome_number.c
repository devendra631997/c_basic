#include<stdio.h>
int main()
{
	int n,a,x=0;
	printf("enter an integer number");
	scanf("%d",&n);
	a=n;
	while (a!=0)
	{
		x=x*10;
		x=x+a%10;
		a=a/10;
	}
	if(x==n)
		printf("number is plaindrome ");
	else
		printf("number is not palindrome");
	return 0;

}
