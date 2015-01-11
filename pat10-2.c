#include<stdio.h>
#include<string.h>
int main()
{
char A[80];
char B[80];
int i,j;

for(i=0;i<80;i++)
	{
	scanf("%c",&A[i]);
	if(A[i]=='\n')
		{
		A[i]='\0';
		break;
		}
int a=i;
for(j=0;j<80;j++)
	{
	scanf("%c",&B[j]);
	if(B[j]=='\n')
		{
		B[j]='\0';
		break;
		}

	}
	}
int b=j;
int t;
char *p=A;
for(i=0,j=0;A[i]!='\0';i++)
	{
	t=i;                  //store the value of i
	while(A[i]==B[j])
		{
		i++,j++;
		if(B[j]=='\0')  //A、B这段数组相等
			{
			p=&A[i];
			i=t;
			while(*p!='\0')
				{
				A[i]=*p;
				p++;
				i++;
				}
			A[i]='\0';	
			break;
			}
		
		}
	i=t;
	j=0;
	}	
return 0;
}
