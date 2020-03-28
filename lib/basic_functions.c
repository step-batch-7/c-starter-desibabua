#include <stdio.h>

int is_even(int);

int is_even(int num)
{
	return num % 2 == 0 ? 1 : 0;
}

int main(void)
{
	int number;
	printf("Enter a number :\n");
	scanf("%d",&number);
	printf("%d is %s.\n",number,(is_even(number)?"even":"not even"));
	return 0;
}