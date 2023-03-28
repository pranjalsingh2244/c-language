//write a prograam to calculate the average of 5 float variable 
#include<stdio.h>
int main()
{
	float a,b,c,d,e,avg;
	printf("Enter the value of 5 float variable");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	avg = (a+b+c+d+e)/5;
	printf("avg is %f",avg);
}
