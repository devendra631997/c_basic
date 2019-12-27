#include<stdio.h>
int main()
{
        int a;
        printf("enter a year\n");
        scanf("%d",&a);
        if(a%4 == 0 && a%100!=0){
                printf("leap year ");
        }
        else
                printf("not leap year ");
        return 0;
}

