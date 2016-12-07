#include <stdio.h>
#include <math.h>

int main ()
{
	double areaTot;
	double l;
	
	while (scanf("%lf",&l) != EOF)
	{
		areaTot = (pow(l,2)*sqrt(3.0))/4.0;
		
		areaTot = (8.0*areaTot)/5.0;
		printf("%.2lf\n",areaTot);
	}
	
	return 0;
}