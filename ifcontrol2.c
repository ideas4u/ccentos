#include <stdio.h>
int main(viod)
{
	int a=0,b=0,c=0,cnt=0;
	printf("Please enter a number:\n");
	scanf("%d",&cnt);
	if (cnt ==0)
		{
		a=2;
		b=3;
		c=5;
		}
	else
		{
		a=-1;
		b=-2;
		c=-3;
		}
	printf("the sum of a,b,c is:%d\n", a + b + c );
	return 0;
}
