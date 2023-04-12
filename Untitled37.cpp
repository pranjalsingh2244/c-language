//TO CALCULATE NUMBER OF DIGITS OF A INTEGER
#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	while(n!=0); 
	{
		count++;
		n=n/10;
	}	
	printf("Number of digit %d",count);
}
