# include<stdio.h>

int main()

{
char A[80][80];
char B[80];
int i=0,j=0,k=0;
//input chars to B
for(k=0;k<80;k++)
	{
	scanf("%c",&B[k]);
	if(B[k]=='\n')
		{
		break;
		}
	}
B[k]=' ';
int t=k;
B[k+1]='\0';
//printf("%s\n",B);

//copy worlds form B to A
for(i=0,k=0;B[k]!='\0';k++,i++)
	{
	for(j=0;B[k]!=' ';k++,j++)
		{
		A[i][j]=B[k];
		}
	A[i][j]='\0';
	}
//A[i][j]='\0';


for(i--;i>=0;i--)
	{
	printf("%s",A[i]);
	if(i!=0)
		{
		printf(" ");
		}
	}
printf("\n");
return 0;
}
