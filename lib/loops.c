#include <stdio.h>

unsigned int find_factorial(unsigned int);
int find_fibonacci(unsigned int);
int print_numbers_in_range(unsigned int,int,int);
int find_odds(unsigned int);
int find_even(unsigned int);
int print_table(int,int);
int add_numbers(int);
int mul_numbers(int);
int odd_numbers_in_range(int,int);
int nth_numbers_in_range(int,int,int);
int sum_of_even_numbers_in_range(int, int);
int reverse_odd_numbers_in_range(int);

int reverse_odd_numbers_in_range(int limit)
{
	int index = limit % 2 == 0 ? limit - 1 : limit;
	while(index >= 1)
	{
		printf(" %d",index);
		index -= 2;
	}
	return 0;
}

int sum_of_even_numbers_in_range(int from, int end)
{
	 int start = from % 2 == 0 ? from : from + 1;
	 int sum = start;
	 while(start < end - 2)
	 {
		start +=2;
		sum += start;
	 }
	 return sum;
}

int nth_numbers_in_range(int start, int end, int diff)
{
	print_numbers_in_range(end, start, diff);
	return 0;
}

int odd_numbers_in_range(int start, int end)
{
	start % 2 ? print_numbers_in_range(end, start, 2) : print_numbers_in_range(end, start + 1, 2);
	return 0;
}

int mul_numbers(int terms)
{
	int mul = 1;
	for(int index = 1;index <=terms;index++)
	{
		int number;
		printf("number %d :- ",index);
		scanf("%d",&number);
		mul *= number;
	}
	return mul;
}

int add_numbers(int terms)
{
	int sum = 0;
	for(int index = 1;index <=terms;index++)
	{
		int number;
		printf("number %d :- ",index);
		scanf("%d",&number);
		sum += number;
	}
	return sum;
}

int print_table(int number,int limit)
{
	int count = 1;
	while(count <= limit)
	{
		printf("  %d X %d = %d\n",number,count,number*count);
		count++;
	}
	return 0;
}

int print_numbers_in_range(unsigned int limit,int start,int diff)
{
	while(limit > start)
	{
		printf(" %d",start);
		start += diff;
	}
	return 0;
}

int find_odds(unsigned int limit)
{
	print_numbers_in_range(limit,1,2);
	return 0;	
}

int find_even(unsigned int limit)
{
	print_numbers_in_range(limit,2,2);
	return 0;	
}

int find_fibonacci(unsigned int limit)
{
	int prev_term = -1;
	int next_term = 1;
	while(limit > 0)
	{
		int curr_term = prev_term + next_term;
		printf(" %u",curr_term);
		prev_term = next_term;
		next_term = curr_term;
		limit--; 
	}
	return 0;
}

unsigned int find_factorial(unsigned int number)
{
	return !number ? 1 : number * find_factorial(number - 1);
}

int main(void)
{
	unsigned int number;
	printf("Enter a number : \n");
	scanf("%u",&number);

	printf("\n");
	printf("find_factorial of %u is %u.\n", number, find_factorial(number));
	printf("fibonacci series for %u is :- ",number);
	find_fibonacci(number);
	printf(".\n");

	printf("odd numbers between 1 and %u is :- ",number);
	find_odds(number);
	printf(".\n");

	printf("even numbers between 1 and %u is :- ",number);
	find_even(number);
	printf(".\n");

	int number1,number2;
	printf("Enter a number and terms to get multiplication table of them .\n");
	scanf("%d",&number1);
	scanf("%d",&number2);
	printf("multiplication table for %d to %u is :-\n",number1,number2);
	printf("\n");
	print_table(number1,number2);
	printf("\n");

	printf("Enter number of terms you want to add :\n");
	scanf("%d", &number1);
	printf("sum of your numbers is :- %d.\n",add_numbers(number1));
	printf("\n");
	
	printf("Enter number of terms you want to multiply :\n");
	scanf("%d", &number1);
	printf("multiplication of your numbers is :- %d.\n",mul_numbers(number1));
	printf("\n");

	printf("Enter numbers to get odd numbers between 1st and 2nd number\n");
	printf("from : ");
	scanf("%d",&number1);
	printf("to : ");
	scanf("%d",&number2);
	printf("odd numbers between %d and %d are :- ",number1,number2);
	odd_numbers_in_range(number1,number2);
	printf(".\n");

	int number3;
	printf("Enter numbers to get every N th number between 1st and 2nd number\n");
	printf("from : ");
	scanf("%d",&number1);
	printf("to : ");
	scanf("%d",&number2);
	printf("difference : ");
	scanf("%d",&number3);
	printf("Nth numbers between %d and %d are :- ",number1,number2);
	nth_numbers_in_range(number1, number2, number3);
	printf(".\n");

	printf("\n");
	printf("Enter numbers to get sum of all even numbers between 1st and 2nd number\n");
	printf("from : ");
	scanf("%d", &number1);
	printf("to : ");
	scanf("%d", &number2);
	printf("sum of all even numbers between %d and %d is :- %d", number1, number2, sum_of_even_numbers_in_range(number1,number2));
	printf(".\n");

	printf("\n");
	printf("Enter a number to get reverse odd numbers upto 1\n");
	printf("number : ");
	scanf("%u", &number1);
	printf("odd numbers between %d and 1 are :-", number1);
	reverse_odd_numbers_in_range(number1);
	printf(".\n");
	return 0;
}