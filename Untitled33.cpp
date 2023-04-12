//to find even and odd number from 1 to 20;
#include<stdio.h>
int main()
{
	int x=1,sum1=0,sum2=0;
	while(x<=20);
	{
		if (x%2==0);
			sum1=sum1+x;
		else
			sum2=sum2+x;
		x++;
	}
	("print sum is even%d\n",sum1);
	("print sum is odd%d\n",sum2);
}
