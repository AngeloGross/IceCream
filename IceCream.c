#include <stdio.h>
#include "VanillaSauce.h"

void buyIce(int *amount)
{
	printf("Here you got %d ice creams\n",*amount);
	*amount=0;
}
int main(void)
{
	int amount=15;
	int ices = 5;
	printf("Hey man!");
	buyIce(&amount);
	buyIce(&amount);
	printf("Now I added this line");
	printf("And another one...");
	return 0;
}
