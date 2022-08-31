#include <stdio.h>

typedef struct money
{
	float amount;
	char currency[4];
} INTL_MONEY_VALUE;

typedef INTL_MONEY_VALUE* INTL_MONEY_VALUE_PTR;

int main()
{

	INTL_MONEY_VALUE usd = { 1.323, "USD" };
	//INTL_MONEY_VALUE sgd = { 1.000, "SGD" };
	//INTL_MONEY_VALUE hkd = { 20.000, "HKD" };
	//INTL_MONEY_VALUE myr = { 3.500, "MYR" };
	//INTL_MONEY_VALUE cny = { 5.453, "CNY" };

	INTL_MONEY_VALUE_PTR ptr = &usd;

	printf("USD is now : %s %f", ptr->currency, ptr->amount);

	return 0;
}