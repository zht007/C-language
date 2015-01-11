# include <stdio.h>
int main()
{
	int input;
	scanf("%d",&input);
	int output = input/16*10 + input%16;
	printf("%d\n",output);
}
