/* print a number'1 and 10 bit.*/
#include <stdio.h>
int main()
{
	void print_ten_and_one(int x)
		{
			int a1=0,a2=0;
			a1 = x % 10;
			a2 = x / 10;
			printf("\n\nthe number %d' one bit is %d,and the ten bit is %d\n\n", x, a1, a2);
		}
		print_ten_and_one(23);
		return 0;
}
