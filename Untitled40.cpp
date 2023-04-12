// loop
//to print fibonacci series upto n terms
//0 1 1 2 3 5 8 13 21...
#include<stdio.h>
int main()
{
	int a=0,b=1,n,i=3,c;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("%d %d ",a,b);// 0 1
	while(i<=n)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		i++;
		
	}
}
