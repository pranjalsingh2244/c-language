// to calculate factorial of a  number
#include<stdio.h>
int main()
{
	int n,i=1,f=1;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
		
	}
	printf("Factorial is %d",f);
}
