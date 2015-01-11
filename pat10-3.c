#include<stdio.h>
#include<string.h>
#define N 80
int main()

{
char str[N+1], resultstr[N+1];
gets(str);
int str_len = strlen(str);

int i;
char *p = resultstr;
for(i = str_len - 1;i != 0; i--,p++)
	{
	*p = str[i];
	}
*p = str[i];
*++p = '\0';

printf("%s\n",resultstr);

return 0;
}
