#include <stdio.h>

int is_even(int);
int is_odd(int);
int square(int);
int cube(int);

int is_even(int num)
{
	return num % 2 == 0 ? 1 : 0;
}

int is_odd(int num)
{
	return !is_even(num);
}

int square(int num)
{
	return num * num;
}

int cube(int num)
{
	return square(num) * num;
}

int main(void)
{
	int number;
	printf("Enter a number :\n");
	scanf("%d",&number);
	printf("\n");
	printf("%d is %s.\n",number,(is_even(number)?"even":"not even"));
	printf("%d is %s.\n",number,(is_odd(number)?"odd":"not odd"));
	printf("square of %d is %d.\n",number,square(number));
	printf("cube of %d is %d.\n",number,cube(number));
	return 0;
}