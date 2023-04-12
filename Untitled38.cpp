// to print reverse of a number

#include<stdio.h>
int main()
{
	int n,rev=0,t;
	printf("enter the value of n\n");
	scanf("%d",&n);
	while(n!=0)
	{
		t=n%10;// take last digit
		rev=rev*10+t;//calculate reverse
		n=n/10;//reduce number
	}
	printf("Reverse is %d",rev);
}
