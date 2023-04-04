// to check whether a character is a vowel or not

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character\n");
	scanf("%c",&ch);
	if(ch=='a'||ch=='i'||ch=='o'||ch=='u')
		printf("ch is vowel\n");
	else
		printf("ch is not a vowel\n");
		
}
