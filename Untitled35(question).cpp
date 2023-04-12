//to print table of a number upto 10
#include<stdio.h>
int main()
{
	int n,x=1;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	while(x<=10)
	{
		printf("%d*%d=%d\n",n,x,n*x);
		x++;
		
	}
}
