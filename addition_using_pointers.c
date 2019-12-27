#include<stdio.h>
int main()
{
	int  x, y,sum;
	int *p,*q;
	printf("enter two numbers\n");
	scanf("%d%d",&x,&y);
	p=&x;
	q=&y;
	sum= *p +*q;
	printf("sum of %d,%d=%d",x,y,sum);
	return 0;
}
