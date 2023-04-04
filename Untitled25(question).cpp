//write a program to convert a small case character to upper case 
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character\n");
	scanf("%c",&ch);
	if (ch>='a' && ch<='z')
		ch=ch-32;

	printf("character in upper case is %c",ch);
}
