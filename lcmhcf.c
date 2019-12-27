#include<stdio.h>
int main()
{
	int x,y,a,b,c,d;
	printf("enter two integers\n");
	scanf("%d%d",&x,&y);
	a=x;
	b=y;

	while(b!=0)
	{
		d=b;
		b=a%b;
		a=d;

	}
	c=(x*y)/a;
	printf("lcm is %d",c);
	printf("hcf is %d",a);

	return 0;
}
