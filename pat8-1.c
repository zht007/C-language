#include <stdio.h>

int main()
{
int N;
scanf("%d",&N);
int A[N];
int B[10]={0};
int i;

for(i=0;i<N;i++)
	{
	scanf("%d",&A[i]);
	}
int b;
for(i=0;i<N;i++)
	{
	b = A[i];
	while(b != 0)	
		{
		B[b%10]++;	
		b/=10;
		}
	}
//test
printf("0 1 2 3 4 5 6 7 8 9\n");
for(i=0;i<10;i++)
	{
	printf("%d ",B[i]);
	} 
printf("\n");
//
 
int maxN=B[0],maxi=0;
for(i=0;i<9;i++)
	{
	if(B[i+1]>B[i])	
		{
		maxN=B[i+1];
		maxi=i+1;
		}		
	} 
printf("%d: ",maxN);

int cnt=0;
for(i=0;i<10;i++)
	{
	if(B[i] == maxN)
		{
		cnt++;	
		}	
	}

for(i=0;i<10;i++)
	{
	if(B[i] == maxN)
		{
		printf("%d",i);
		cnt--;
		if(cnt !=0) printf(" ");
		else printf("\n");
		}	
	}
return 0;
}
