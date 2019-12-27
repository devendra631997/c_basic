#include<stdio.h>
int main()
{
        int a,d, b,c=0;
        printf("enter a integer\n");
        scanf("%d",&a);
	d=a;
        while(d!=0)
	{
		b=d%10;
		c= c+b;
		d=d/10;
        }
	printf("sum of digit %d",c);
        return 0;
}


