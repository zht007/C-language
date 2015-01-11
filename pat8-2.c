#include<stdio.h>
int main()
{
int M,N;
scanf("%d %d",&M,&N);
int A[M][N];
int i,j;
//read
for(i=0;i<M;i++)
	{
	for(j=0;j<N;j++)
		{
		scanf("%d",&A[i][j]);
		}
	}

int cnt=0;
for(i=1;i<M-1;i++)
	{
	for(j=1;j<N-1;j++)
		{
		if(A[i][j]>A[i-1][j] && A[i][j]>A[i+1][j] && A[i][j]>A[i][j-1] && A[i][j]>A[i][j+1])
			{
			printf("%d %d %d\n",A[i][j],i+1,j+1);
			cnt++;
			}
		}
	}
if(cnt == 0)
	{
	printf("None %d %d\n",M,N);
	}
return 0;
}
