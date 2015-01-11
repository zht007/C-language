#include<stdio.h>
#include<string.h>

int main()
{
char A[80];
int i;

for(i=0;i<80;i++)
	{
	scanf("%c",&A[i]);
	if(A[i]=='\n')
		{
		A[i]='\0';
		break;
		}
	}
int t=i;
char c;
scanf("%c",&c);
char *p=A;
while(*p!='\0')
	{
	if(*p==c)
		{
		break;
		}
	p++;
	}

if(*p=='\0')
	{
	printf("Not found\n");
	}
else
	{
	printf("%s\n",p);
	}

//char *p=strchr(A,c);
//if(p)
//	{
//	printf("%s\n",p);
//	}
//else
//	{
//	printf("Not found\n");
//	}
return 0;
}
