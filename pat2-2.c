# include <stdio.h>
int main()
{
	int t0,t;

	scanf("%d %d",&t0,&t);
	int t1=t0/100*60+t0%100;
	//printf("%d\n",t1);

	int t2 = t1+ t;
	int t3 = t2/60%24*100+t2%60;
	//int t4 = t2%60;

	printf("%d\n",t3);
}
