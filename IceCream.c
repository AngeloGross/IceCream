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
	buyIce(15);
	printf("Now I added this line");
	printf("And another one...");
	return 0;
}
