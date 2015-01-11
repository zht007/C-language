# include <stdio.h>
int main ()
{
int N,n = 10,n0,n1;
scanf("%d",&N);
int j;
for(j=1;j<N-1;j++)
	{
	n *= 10;	
	}
int k = n;
for(;n<10*k;n++)
	{
	n0=n;
	n1=0;
	while(n0 >0)	
		{
		int i,n3=1;
		for (i=0;i<N;i++)
		{
		n3*=(n0%10);				
		}
		n1+=n3;
		n0/=10;
		}
	if (n == n1)
		{
		printf("%d\n",n);
		}
	}
}
