#include <stdio.h>
#include <math.h>
double hypotenuse(double x,double y)
{
	return sqrt(x*x+y*y);
}
int main()
{
	double a,b;
	
	printf("Enter two numbers:");
	scanf("%lf",&a); //%lf
	scanf("%lf",&b);
	printf("the hypotenuse is %.1f",hypotenuse(a,b));
}
