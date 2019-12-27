#include<stdio.h>
int find_maximum(int[],int[]);
int main()
{
	int array[100], maximum,size,c,location=1;
	printf("enter the number of elements in array\n");
	scanf("%d",&size);
	printf("enter %d integer\n",size);
	for(c=0; c < size;c++)
	scanf("%d",&array[c]);

	location = find_maximum(array, size);
	maximum = array[location];
	printf("maximum element location = %d and value = %d.\n",location + 1,maximum);
	return 0;

}

int find_maximum(int a[], int n)
{
	int c, max, index;

	max = a[0];
	index = 0;
	for (c=1; c<n; c++)
	{
		if(a[c]>max)
		{
			index=c;
			max=a[c];

		}
	}
	return index;
}
