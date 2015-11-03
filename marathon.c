/* The distance of a marathon in kilometers. */
#include <stdio.h>
#define PI 3.14159
int main()
{
	int miles,yards;
	float kilometers;
	
	miles = 26;
	yards = 385;
	kilometers = 1.609 * (miles + yards / 1760.0);
	printf("\nA marathon is %f kilometers.\n\n",kilometers);
	printf("PI = %f\n\n",PI);
	return 0;

}

