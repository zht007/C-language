# include <stdio.h>
int main ()
{
int min,max;
scanf("%d %d",&min,&max);
int a;
int i;
int count=0;
int sum=0;
for(a=min;a<=max;a++)
	{
	for(i=2;i<a;i++)
		{
		if(a%i == 0)break;
		}
	if(i==a) 
		{
		count++;
		sum+=a;	
		}
	}
printf("%d %d\n",count,sum);
return 0;
}
