#include <stdio.h>

int break_in_denomination(int ,int);
int breakdown_currency(int);

int break_in_denomination(int amount, int rupees)
{
	int count = 0;
	while(rupees <= amount)
	{
		amount -= rupees;
		count++;
	}
	printf("  %d X Rs %d\n",count,rupees);
	return amount;
}

int breakdown_currency(int amount)
{
	int rem_amount = amount;
	rem_amount = break_in_denomination(rem_amount,2000);
	rem_amount = break_in_denomination(rem_amount,500);
	rem_amount = break_in_denomination(rem_amount,200);
	rem_amount = break_in_denomination(rem_amount,100);
	rem_amount = break_in_denomination(rem_amount,50);
	rem_amount = break_in_denomination(rem_amount,10);
	rem_amount = break_in_denomination(rem_amount,5);
	break_in_denomination(rem_amount,1);
	return 0;
}

int main(void)
{
	unsigned int amount;
	printf("Enter an amount for breakdown in currency\n");
	printf("Amount : Rs. ");
	scanf("%u",&amount);
	printf("\n");
	breakdown_currency(amount);
	return 0;
}