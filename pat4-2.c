# include <stdio.h>
int main()

{

int a=1,b=1;
int n;
scanf("%d",&n);
int i;
for(i=1;i<=n;i++)
{
	for(a=1;a<=i;a++)
	{
	printf("%d*%d=%d  ",a,b,a*b);
		if(a*b<10) printf(" ");
	  	if(a==b) printf("\n");	
	}
	b++;
}
return 0;
}
