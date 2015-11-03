/*the function of if statement.*/
#include <stdio.h>

int main()
{
	int a=3,b=4;
	void print_parity(int x)
		{
			if(x % 2 ==0)
				printf("%d is even.\n", x);
			else
				printf("%d is odd.\n", x);
		}
	print_parity(a);
	print_parity(b);
	return 0;
}
