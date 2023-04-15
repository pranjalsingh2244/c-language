//PROGRAM TO PRINT AREA OF CIRCLE BY TAKING RADIUS FROM 1 TO 10
#include<stdio.h>
int main()
{
	float x=1.0f,area;
	while(x<=10.0f)
	{
		area=1;
		area=3.14*x*x;
printf("Area of the circle with radius %0.1f %0.2f\n",x,area);
x++;
	}
}

