// to find greatest of 3 numbers 

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a value a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	printf("a is greater\n");
	else if (b>c)
	printf("a is greater\n");
	else
	printf("c is greater\n");
}
