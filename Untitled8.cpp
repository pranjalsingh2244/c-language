//logical opraetors
#include <stdio.h>
int main()
{
	int a=12,b=36,c=74,com;
	com=a>b && a<b;
	printf("com is %d",com);
	com = b>c && b<c;
	printf("com id %d",com);
	com = a>b || a<b;
	printf("\ncom is %d",com);
	com = b>c || b<c;
	printf("\ncom is %d",com);
}
