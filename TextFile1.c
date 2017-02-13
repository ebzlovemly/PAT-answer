#include <stdio.h>
int main()
{
	int number;
	int count;
	count = 0;
	scanf_s("%d", &number);
	while (number != 1)
	{
		if (number % 2 == 0)
		{
			number /= 2;
			count++;
			
		}
		else
		{
			number = (number * 3 + 1) / 2;
			count++;
			
		}
	}
	printf("×Ü¹²%d´Î", count);
}