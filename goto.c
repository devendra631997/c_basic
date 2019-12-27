#include<stdio.h>
int main()
{
	int x=1;
previous:
       printf("%d\n",x--);
       goto previous;
       return 0;
}

