//conditional opreators
//ernary opreator
//Exp1?Exp2:Exp3
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a and b\n ");
	scanf("%d%d,&a&b");
	//a>b?printf("a is greater"):printf("b is greater")
	c = a>b ? a:b;
	printf("%d is greater",c);
}
