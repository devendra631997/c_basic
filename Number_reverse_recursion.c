#include<stdio.h>
void Reverse(n){
	if(n){
	printf("%d",n%10);
	Reverse(n/10);
	}
}
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	Reverse(num);
	return 0;
}
