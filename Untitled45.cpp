//switch user 
#include<stdio.h>
int main()
{
	int choice,a,b;
	printf("Enter 1 for addition,2 for substraction and 3 for exit");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
				printf("Enter the value of a and b\n");
				scanf("%d%d",&a,&b);
				printf("sum is %d");
				break;
		case2:
				printf("Enter the value of a and b\n");
				scanf("%d%d",&a,&b);
				printf("sub is %d",a-b);
				break;
		case3:
				exit(0);
		default:
				printf("wrong input\n");
	}
	
}
