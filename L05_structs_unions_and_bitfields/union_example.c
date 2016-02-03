#include <stdio.h>

typedef union
{
	float rmb;
	float dollar;
} cost;

typedef struct 
{
	char *module; // must use address
	cost price;
} phone;

int main()
{
    cost c;
	c.dollar = 999.99;
	phone Iphone7 = {"apple", c.dollar}; 

	printf("the price of the [%s] is [%.2f]\n", 
		Iphone7.module,Iphone7.price.dollar);
	return 0;
}
