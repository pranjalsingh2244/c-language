//if elseif.....else
#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age\n")
	scanf("%d%d,&age");
	if(age<=0)
		printf("Age is not valid\n");
	else if(age >0 && age<18)
		printf("person is not eligible to vote\n");
	else
	printf("person is eligible to vote\n");
}
