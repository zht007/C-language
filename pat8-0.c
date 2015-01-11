# include<stdio.h>

int main()
{
int N,x;
scanf("%d %d",&N,&x);

int a[N];
int i;
for(i=0;i<N;i++)
	{
	scanf("%d",&a[i]);
	}
for(i=0;i<N;i++)
	{
	if(a[i]==x)
		{
		printf("%d\n",i);	
		break;
		}
	}
if(i == N)
	{
	printf("Not Found\n");
	}
return 0;
}
