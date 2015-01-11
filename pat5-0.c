# include <stdio.h>
int main ()

{
int n,i;
double f=0.0;
double u=2.0,d=1.0,d1;
scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
	f+=u/d;		
	d1=d;
	d=u;
	u=u+d1;
	}
printf("%.2lf\n",f);
}
