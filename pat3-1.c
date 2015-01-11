# include <stdio.h>
int main ()
{
int day;
//	scanf("%d",&day);
for (day = 1;day<=100;day++)
{
	if (day%5 == 4)
		{
		printf("Drying in day %d\n",day);
		}
	else if (day%5 == 0)
                {
                printf("Drying in day %d\n",day);
                }

	else 
		{
		printf("Fishing in day %d\n",day);
		}
}
}
