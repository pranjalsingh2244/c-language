//to calculate a distance from meter to cm and km
#include<stdio.h>
int main()
{
	float m,cm,km;
	printf("Enter the m \n");
	scanf("%f",&m);
	
	cm=m*100;
	km=m/1000;
	
	printf("the cm is %f \n",cm);
	printf("the km is %f",km);
	
}

