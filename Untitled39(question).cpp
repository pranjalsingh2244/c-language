// to check whether a number is palindrome or not

#include<stdio.h>
int main()
{
	int n,rev=0,t,pal;
	printf("enter the value of n\n");
	scanf("%d",&n);
	while(n!=0)
	{
		t=n%10;
		rev=rev*10+t;
		n=n/10;
	}
	if(rev==pal)
		printf("Number is palindrome\n");
	else
		printf("Number is not palindrome\n");
}
