# include <stdio.h>
int main()
{
	int input;
	scanf("%d",&input);
	int output = input%10*100 + input/10%10*10 + input/100;
	printf("%d\n",output);
}
