# include <stdio.h>

int main()
{
	int price = 0;
	
	printf("Please input the price(rmb)\n");
	scanf("%d",&price);

	int change = 100 - price;

	printf("Return you %d yuan\n", change);

	return 0;
}
