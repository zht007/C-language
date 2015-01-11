#include<stdio.h>
#include<string.h>
#define N 80

void del_str(char *str, char *s,char *resultstr)
{
int i;
strcpy(resultstr, str);
int s_len = strlen(s);
int resultstr_len = strlen(resultstr);

char *p = strstr(resultstr, s);

while(p != NULL)
	{
	for(i = p-resultstr; i <= resultstr_len - s_len; i++)
		{
		resultstr[i] = resultstr[i+s_len];
		}
	resultstr_len = strlen(resultstr);
	p = strstr(resultstr, s);
	}
}


int main()

{
char str[N+1], s[N+1], resultstr[N+1];
gets(str);
gets(s);

del_str(str, s, resultstr);
printf("%s\n",resultstr);

return 0;
}
