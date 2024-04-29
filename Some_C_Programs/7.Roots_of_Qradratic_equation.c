#include <stdio.h>
#include <math.h>
int main()
{
	float x1, x2;
	float rootpart, denom, a, b, c;
	float verify1, verify2;

	printf("\n-----------------------------------------------------------------\n");

	printf("Enter the value of a,b,c of the qradratic equation_ ax^2 + bx + c \n");
	scanf("%f%f%f", &a, &b, &c);

	rootpart = sqrt((b * b) - 4 * a * c);
	denom = 2 * a;
	x1 = ((-b) + rootpart) / denom;
	x2 = ((-b) - rootpart) / denom;

	printf("The value of x1 is %f", x1);

	printf("\n-----------------------------------------------------------------\n");
	printf("The value of x2 is %f", x2);

	printf("\n-----------------------------------------------------------------\n");

	verify1 = ((a * (x1 * x1)) + (b * x1) + c);
	verify2 = ((a * (x2 * x2)) + (b * x2) + c);

	if (verify1 == 0)
	{
		printf("verification 1 is successful:");
	}
	else
	{
		printf("verification 1 is unsuccessful:");
	}

	printf("\n-----------------------------------------------------------------\n");
	if (verify2 == 0)
	{
		printf("verification 2 is successful:");
	}
	else
	{
		printf("verification 2 is unsuccessful:");
	}
	printf("\n-----------------------------------------------------------------\n");
}