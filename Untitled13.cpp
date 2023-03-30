#include<stdio.h>
int main()
{
	int x=0,y=4,z;
	//z= ++x ? ++y; 
	z= ++x ? ++y : y;
	printf("z is %d",z);
}
