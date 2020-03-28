#include <stdio.h>

int is_even(int);
int is_odd(int);
int square(int);
int cube(int);
int find_gcd(int,int);
int find_lcm(int,int);
double find_si(double,double,double);

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

double find_si(double sum, double rate, double period)
{
	return (sum * rate * period)/100;
}

int main(void)
{
	int number1,number2;
	printf("Enter a number :\n");
	scanf("%d",&number1);
	printf("\n");
	printf("%d is %s.\n",number1,(is_even(number1)?"even":"not even"));
	printf("%d is %s.\n",number1,(is_odd(number1)?"odd":"not odd"));
	printf("square of %d is %d.\n",number1,square(number1));
	printf("cube of %d is %d.\n",number1,cube(number1));
	printf("\n");

	printf("Enter two number :\n");
	scanf("%d",&number1);
	scanf("%d",&number2);
	printf("\n");
	printf("greatest common divisor of %d and %d is %d.\n", number1, number2, find_gcd(number1,number2));
	printf("least common multiple of %d and %d is %d.\n", number1, number2, find_lcm(number1,number2));
	printf("\n");

	double sum,rate,period;
	printf("Enter respectives to find interest for your principle:\n");
	printf("principle :  ");
	scanf("%lf",&sum);
	printf("rate :  ");
	scanf("%lf",&rate);
	printf("period :  ");
	scanf("%lf",&period);
	printf("simple interest for Rs %.2lf  at %.2lf for  %.1lf years is Rs %.2lf.\n", sum, rate, period, find_si(sum, rate, period));
	return 0;
}