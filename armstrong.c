#include<stdio.h>
int main()
{
        int z,a,i,d=0;
	i=10;
	int b[i];
        printf("enter a number");
        scanf("%d",&a);
	z=a;
	while(a!=0)
	{
		b[i]=a%10;
		a=a/10;
		d=d+(b[i]*b[i]*b[i]);
	}
	printf("%d ",d);
	if(d!=z)
                        printf("not armstrong");
	 else
                        printf("yes armstrong");
return 0;
}
