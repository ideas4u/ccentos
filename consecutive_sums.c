/*the number below 5 add together.*/
#include <stdio.h>

int main()
{
	int i =1 ,sum = 0;
	while (i <= 5)
		{
			sum += i;
			++i;
		}
	printf("sum = %d\n", sum);
	return 0;  
}
