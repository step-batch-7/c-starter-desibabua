#include <stdio.h>

unsigned int find_factorial(unsigned int);
int find_fibonacci(unsigned int);
int print_numbers_in_range(unsigned int,int,int);
int find_odds(unsigned int);
int find_even(unsigned int);

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
	return 0;
}