#include <stdio.h>
#include <string.h>
#define N 100

void shift(char *str, int n, char *resultstr)
{
int i;
int str_len = strlen(str);
if(n > str_len)
	{
	n %= str_len;
	}


char *p = resultstr;
for(i = n; str[i] != '\0'; i++,p++)
	{
	*p = str[i];	
	}
for(i=0; i<n; i++,p++)
	{
	*p = str[i];		
	}	
*p = '\0';
}


int main()
{
char str[N+1], resultstr[N+1];
int n;

gets(str);
scanf("%d",&n);

shift(str, n, resultstr);
printf("%s\n",resultstr);

return 0;
}
