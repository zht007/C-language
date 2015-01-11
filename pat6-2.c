#include <stdio.h>
int main()
{
char ch;
do
{
scanf("%c",&ch);
if(ch >= 'a' && ch <= 'x')
	{
	printf("%c",ch + ('A'-'a'));
	}
else if(ch >= 'A' && ch <= 'X')
	{
	printf("%c",ch + ('a'-'A'));
	}
else if(ch == '#')
	{
	break;
	}

else printf("%c",ch);
}
while(ch != '#');
printf("\n");
return 0;
}
