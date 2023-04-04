//program to check whether a number is +ve,-ve or zero


#include<stdio.h>
int main()
{
	int a;
	printf("enter the charactor a\n");
	scanf("%d",&a);
	if(a>0)
	printf("a is +ve\n");
	else if(a<0)
	printf("a is negative\n");
	else
	printf("a is zero\n");
}
