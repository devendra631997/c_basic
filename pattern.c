#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter a number");
	scanf("%d",&n);
	for (i=1;i<=n;i++)  // for increasing row
	{
	//	for(j=1;j<=n-i;j++)
          //              printf("%d",i);

		for(j=1;j<=n-i;j++)   //for dcereasing space
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",i);
		  for(j=2;j<=i;j++)   // for increment counting
                    printf("%d",i);

  		  printf("\n");
	}
	 for (i=1;i<=n;i++)    // for decreasing row
	 {
	  for(j=n-i;j>=1;j--)
                        printf(" ");  // for increasing space
	  for(j=n-i;j>=1;j--)
                    printf("%d",j);      // for decrement  counting
	 for(j=n-2;j>=1;j--) 
		 printf("%d",j);
	  printf("\n");


	 } 

return 0;
}
