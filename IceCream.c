#include <stdio.h>
#include "VanillaSauce.h"

void buyIce(int amount)
{
	printf("Here you got %d ice creams",amount);
}
int main(void)
{
	int ices = 5;
	printf("Hey man!");
	buyIce(5);
	return 0;
}
