#include<stdio.h>
int main()
{
	int a,sum = 0, c , value;
	printf("how many no you want to add");
	scanf("%d",&a);
	printf("enter %d integr\n", a);
	for(c=1;c<=a;c++)
	{
		scanf("%d",&value);
		sum=sum + value;
//		printf("%d\n",sum);


	}
	printf("sum of the integers = %d\n",sum);
	return 0;
}
