#include <stdio.h>
int a;

int main()
{
	printf("Enter the number : ");
	scanf_s("%d", &a);
	if (a % 2 == 0 && a % 11 == 0)
	{
		printf("%d is divisible by 2 and 11",a);
	}
	else if (a % 2 == 0 || a % 11 == 0)
	{
		if (a % 2 == 0)
		{
			printf("%d is divisible by 2", a);
		}
		else
		{
			printf("%d is divisible by 11", a);
		}
	}
	else
	{
		printf("%d is not divisible by 2 and 11",a);
	}
}