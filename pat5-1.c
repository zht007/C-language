# include <stdio.h>
int main()
{
int u,d,r;

scanf("%d/%d",&u,&d);
int u0=u,d0=d;
while(d != 0)
	{
	r=d;
	d=u%d;
	u=r;
	}
printf("%d/%d\n",u0/u,d0/u);
}
