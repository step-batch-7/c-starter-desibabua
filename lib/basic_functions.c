#include <stdio.h>

int is_even(int);
int is_odd(int);

int is_even(int num)
{
	return num % 2 == 0 ? 1 : 0;
}

int is_odd(int num)
{
	return !is_even(num);
}

int main(void)
{
	int number;
	printf("Enter a number :\n");
	scanf("%d",&number);
	printf("%d is %s.\n",number,(is_even(number)?"even":"not even"));
	printf("%d is %s.\n",number,(is_odd(number)?"odd":"not odd"));
	return 0;
}