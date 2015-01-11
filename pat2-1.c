# include <stdio.h>

int main ()
{
	int cm;

	scanf("%d",&cm);
	
	int inch = cm * 0.39;
	int foot = inch / 12;
	
	inch %= 12;		

	printf("%d %d\n",foot,inch);
}
