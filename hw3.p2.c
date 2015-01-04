/*	Author: Parker Mathewson
	Date: 2/6/12
	This program is a math program that is used to calculate the hypotenuse of a right triangle. This is an example problem showing us how 
to use the math library and use the square and square root functions within this library.*/

#include <stdio.h>
#include <math.h>	//need for sqareroot and square function

int main(void)
{
	float a=0;
	float b=0;
	float c=0;
	float hyp=0;

	printf("Please enter side a of the right triangle:");
	scanf("%f",&a);

	printf("\n\nPlease enter side b of the right triangle:");
	fflush(stdin);
	scanf("%f",&b);

	hyp = a*a +b*b;
	c = sqrt(hyp);

	printf("\n\nThe hypotenuse of triangle abc is %.3f\n",c);

	return (0);
}
