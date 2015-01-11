#include<stdio.h>
int main()
{
int IN[10];
int i;
int value;
for(i=0;i<10;i++)
	{
	scanf("%d",&value);
	IN[i] = value;
	}

if(IN[0]>0)
{
for(i=1;i<10;i++)
	{
	if(IN[i]!=0)
		{
		printf("%d",i);
		IN[i]--;
	break;
		}
	}
for(i=0;i<10;i++)
	{
	while(IN[i]!=0)	
		{
		printf("%d",i);
		IN[i]--;
		}
	}
}
else
{
for(i=0;i<10;i++)
	{
	while(IN[i]!=0)	
		{
		printf("%d",i);
		IN[i]--;
		}
	}
}
printf("\n");
return 0;
}
