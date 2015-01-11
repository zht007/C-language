# include <stdio.h>

int main ()

{
	double x;
	int n,year;


	printf("Please input your Monney and years\n" );
	scanf("%lf %d",&x,&year);
	for( n=0; n<year; n++) 
		x = x * (1 + 0.033);
	
	printf("you will get %lf after %d years\n", x,year);

	return 0;


}
