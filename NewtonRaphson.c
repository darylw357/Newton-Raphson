/* Newton-Raphson method of solving roots*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	long double X1 = 0.5;
	double X2 = 0;
	double X3 = 0;
	int x;
	
	for(x = 0; x < 20; x++)
	{
	X3 = (cos(X1) - X1) / (sin(X1) + 1);
	
	X1 = X1 + X3;
	
	
	
	printf("Test %.20f\n",fabs(X1));
	x++;
	
	}
	getch();
}

