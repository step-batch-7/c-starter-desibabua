#include <stdio.h>

int is_even(int);
int is_odd(int);
int square(int);
int cube(int);
int find_gcd(int,int);
int find_lcm(int,int);

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

int find_gcd(int num1,int num2)
{
	if(!num2) return num1;
	return num1 % num2 == 0 ? num2 : find_gcd(num2, num1 % num2);
}

int find_lcm(int num1,int num2)
{
	return (num1 * num2) / find_gcd(num1, num2);
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
	printf("\n");

	int number1,number2;
	printf("Enter two number :\n");
	scanf("%d",&number1);
	scanf("%d",&number2);
	printf("\n");
	printf("greatest common divisor of %d and %d is %d.\n", number1, number2, find_gcd(number1,number2));
	printf("least common multiple of %d and %d is %d.\n", number1, number2, find_lcm(number1,number2));
	return 0;
}