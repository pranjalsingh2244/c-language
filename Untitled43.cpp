// to print fatorial of number from 1 to 10


#include<stdio.h>
int main()
{
	int i,n,f,x;
	for(i=1;i<=10;i++)
	{
		n=1;
		f=1,x=1;
		while(x<=n)
		{
			f=f*x;
			x++;
			
		}
		printf("Factorial of %d is %d\n",i,f);
	}
}
