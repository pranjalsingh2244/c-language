//swap the value of 2 integer variable using 3 variable 

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a and b/n");
	scanf("%d%d",&a,&b);
	printf("before swap a and b are %d%d",a,b);
	c=b;
	b=a;
	a=b;
	printf("after swap a and b are %d%d",a,b);
}
