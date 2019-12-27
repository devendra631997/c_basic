#include<stdio.h>
int main()
{
        int a,b,c=1;
        printf("enter a integer\n");
        scanf("%d",&a);
        while(a!=0)
        {
                c= c*a;
                a--;
        }
        printf("factorial of given number %d",c);
        return 0;
}


